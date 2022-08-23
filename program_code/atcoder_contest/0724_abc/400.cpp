typedef long long ll;
#include <stdio.h>
#include <iostream>
#include <vector>
#include <math.h>
#include <map>
using namespace std;

#define rep(i, s, n) for (ll i = (s); i < (ll)(n); i++)

// 無限大を表す値
const long long INF = 1LL << 60; // 十分大きな値を用いる (ここでは 2^60)

// 辺を表す型，ここでは重みを表す型を long long 型とする
struct Edge {
    ll to; // 隣接頂点番号
    long long w; // 重み
    Edge(ll to, long long w) : to(to), w(w) {}
};

// 重み付きグラフを表す型
using Graph = vector<vector<Edge>>;

// 緩和を実施する関数
template<class T> bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    else return false;
}


int main() {
    // 頂点数，辺数，始点
    ll N, M;
    ll ans;
    ll tmp[200001];
    cin >> N >> M;

    // グラフ
    Graph G(N);
    for (ll i = 0; i < M; ++i) {
        ll a, b;
        cin >> a >> b;
        G[a-1].push_back(Edge(b-1, 1));
        G[b-1].push_back(Edge(a-1, 1));
    }

    // ダイクストラ法
    ll s = 0;
    vector<bool> used(N, false);
    vector<long long> dist(N, INF);
    dist[s] = 0;
    for (ll iter = 0; iter < N; ++iter) {
        // 「使用済み」でない頂点のうち，dist 値が最小の頂点を探す
        long long min_dist = INF;
        ll min_v = -1;
        for (ll v = 0; v < N; ++v) {
            if (!used[v] && dist[v] < min_dist) {
                min_dist = dist[v];
                min_v = v;
            }
        }

        // もしそのような頂点が見つからなければ終了する
        if (min_v == -1) break;

        // min_v を始点とした各辺を緩和する
        for (auto e : G[min_v]) {
            chmin(dist[e.to], dist[min_v] + e.w);
            if (e.to == N-1){
                tmp[dist[e.to]] += 1;
            }
        }
        used[min_v] = true; // min_v を「使用済み」とする
    }

    // 結果出力
    if (dist[N-1] < INF) cout << tmp[dist[N-1]] << endl;
    else cout << '0' << endl;
}
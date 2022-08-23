typedef long long ll;
#include <stdio.h>
#include <iostream>
#include <vector>
#include <math.h>
#include <map>
using namespace std;

#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// 無限大を表す値 (ここでは 2^60 とする)
const long long INF = 1LL << 60;

// 辺を表す型，ここでは重みを表す型を long long 型とします
struct Edge {
    int to; // 隣接頂点番号
    long long w; // 重み
    Edge(int to, long long w) : to(to), w(w) {}
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
    vector<long long> dist(N, INF);
    ll s = 0;
    dist[s] = 0;

    // (d[v], v) のペアを要素としたヒープを作る
    priority_queue<pair<long long, int>,
                   vector<pair<long long, int>>,
                   greater<pair<long long, int>>> que;
    que.push(make_pair(dist[s], s));

    // ダイクストラ法の反復を開始
    while (!que.empty()) {
        // v: 使用済みでない頂点のうち d[v] が最小の頂点
        // d: v に対するキー値
        int v = que.top().second;
        long long d = que.top().first;
        que.pop();

        // d > dist[v] は，(d, v) がゴミであることを意味する
        if (d > dist[v]) continue; 

        // 頂点 v を始点とした各辺を緩和
        for (auto e : G[v]) {
            if (chmin(dist[e.to], dist[v] + e.w)) {
                // 更新があるならヒープに新たに挿入
                que.push(make_pair(dist[e.to], e.to)); 
                if (e.to == N-1){
                    tmp[dist[e.to]] += 1;
                }
            }
        }
    }
    
    // 結果出力
    if (dist[N-1] < INF) cout << tmp[dist[N-1]] << endl;
    else cout << '0' << endl;
}
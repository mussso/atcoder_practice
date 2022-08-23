#include <iostream>
#include <vector>

using namespace std;
using Graph = vector<vector<int>>;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
int ans;

// 深さ優先探索
vector<bool> seen;
void dfs(const Graph &G, int v) {
    seen[v] = true; // v を訪問済にする

    // v から行ける各頂点 next_v について
    for (auto next_v : G[v]) { 
        if (seen[next_v]) continue; // next_v が探索済だったらスルー
        dfs(G, next_v); // 再帰的に探索
        ans++;
    }
}

int main() {
    // 頂点数と辺数、s と t
    int N, M;
    cin >> N >> M;

    // グラフ入力受取
    Graph G(N+1);
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
    }

    // 頂点 s をスタートとした探索
    rep(i,1,N+1){
        seen.assign(N+1, false); // 全頂点を「未訪問」に初期化
        dfs(G, i);
    }
    ans += N;
    cout << ans << endl;
}
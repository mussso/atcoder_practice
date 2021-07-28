#include <iostream>
#include <vector>
using namespace std;

int main() {
    /* 入力受け取り */
    int n; cin >> n;
    long long x; cin >> x;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    /* 区間の長さの最小値 */
    int res = 0; // 上界を入れておく

    /* 区間の左端 left で場合分け */
    int right = 0;
    long long sum = 1;
    for (int left = 0; left < n; ++left) {
        while (right < n && sum*a[right] <= x) {
            sum *= a[right];
            ++right;
        }

        /* 更新 */
        if (sum > x) break; // これ以上 left を進めてもダメ
        res = max(res, right - left);

        /* left をインクリメントする準備 */
        if (right == left) ++right; // right が left に重なったら right も動かす
        else sum /= a[left]; // left のみがインクリメントされるので sum から a[left] を引く
    }

    /* res = n+1 のときは解なし */
    cout << res << endl;
}
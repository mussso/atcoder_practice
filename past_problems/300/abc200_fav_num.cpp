#include <iostream>
#include <algorithm>
#include <tuple>

using namespace std;
#define MAX_N 100001
typedef long long ll;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int N, A[201010];
int cnt[202];

int main() {
    cin >> N;
    rep(i, 0, N) cin >> A[i];

    ll ans = 0;
    rep(i, 0, N) {
        int mo = A[i] % 200;
        ans += cnt[mo];
        cnt[mo]++;
    }
    cout << ans << endl;
}
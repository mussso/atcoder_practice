#include <iostream>
#include <algorithm>
#include <tuple>

using namespace std;
#define MAX_N 100001
typedef long long ll;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

ll N, ans;
ll a[MAX_N],b[MAX_N],c[MAX_N],d[MAX_N];
ll cnt[MAX_N];

int main() {
    cin >> N;
    rep(i, 0, N) cin >> a[i];
    rep(i, 0, N) cin >> b[i];
    rep(i, 0, N) cin >> c[i];
    rep(j, 0, N) d[j] = b[c[j] - 1];

    rep(j, 0, N) cnt[d[j]]++;
    ll ans = 0;
    rep(i, 0, N) ans += cnt[a[i]];
    
    cout << ans << endl;
}
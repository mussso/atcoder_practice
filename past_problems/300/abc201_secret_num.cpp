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
string S;

ll solve() {
    int used = 0, unused = 0, unknown = 0;
    fore(c, S) {
        if (c == 'o') used++;
        else if (c == 'x') unused++;
        else unknown++;
    }

    if (4 < used) return 0;
    if (used + unknown < 1) return 0;

    ll res = 0;
    rep(add, 0, unknown + 1) {
        if (add + used == 0) continue;
        if (4 < add + used) continue;

        int cnt = used + add;

        if (cnt == 1) res += 1 * aCb(unknown, add);
        else if (cnt == 2) res += (2 * 4 + aCb(4, 2)) * aCb(unknown, add);
        else if (cnt == 3) res += 3 * 4 * 3 * aCb(unknown, add);
        else if (cnt == 4) res += 4 * 3 * 2 * aCb(unknown, add);
    }
    return res;
}
//---------------------------------------------------------------------------------------------------
void _main() {
    cin >> S;
    cout << solve() << endl;
}
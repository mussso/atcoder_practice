#include <iostream>
#include <algorithm>
#include <cstring>
#include <tuple>
#include <map>

typedef long long ll;
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)


int N, A[2010], B[2010];
//---------------------------------------------------------------------------------------------------
int main() {
    cin >> N;
    rep(i, 0, N) {
        int t, l, r; cin >> t >> l >> r;
        if (t == 1) A[i] = l * 2, B[i] = r * 2 + 1;
        else if (t == 2) A[i] = l * 2, B[i] = r * 2;
        else if (t == 3) A[i] = l * 2 + 1, B[i] = r * 2 + 1;
        else A[i] = l * 2 + 1, B[i] = r * 2;
    }

    int ans = 0;
    rep(i, 0, N) rep(j, i + 1, N) {
        int AA = max(A[i], A[j]);
        int BB = min(B[i], B[j]);
        if (AA < BB) ans++;
    }
    cout << ans << endl;
}
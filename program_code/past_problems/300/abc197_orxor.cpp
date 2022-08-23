#include <iostream>
#include <algorithm>
#include <tuple>
#include <math.h>

using namespace std;
#define MAX_N 20
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
typedef long long ll;

int N, A[20];
#define inf 1 << 60

//---------------------------------------------------------------------------------------------------
void _main() {
    cin >> N;
    rep(i, 0, N) cin >> A[i];
    
    if (N == 1) {
        cout << A[0] << endl;
        return;
    }

    int ans = inf;
    rep(msk, 0, 1 << (N - 1)) {
        int tot = 0;
        int cur = A[0];
        rep(i, 1, N) {
            if (msk & (1 << (i - 1))) {
                tot ^= cur;
                cur = 0;
            }
            cur |= A[i];
        }
        tot ^= cur;
        chmin(ans, tot);
    }
    cout << ans << endl;
}

int main(){
    _main();
}

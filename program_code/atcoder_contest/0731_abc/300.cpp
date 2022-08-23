typedef long long ll;
#include <stdio.h>
#include <iostream>
#include <vector>
#include <math.h>
#include <map>
#include <algorithm>

using namespace std;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

#define rep(i, s, n) for (ll i = (s); i < (ll)(n); i++)
ll N; ll M;
ll a[200100], b[200100];

//---------------------------------------------------------------------------------------------------
int main() {
    cin >> N >> M;
    rep(i,0,N) cin >> a[i];
    rep(i,0,M) cin >> b[i];

    sort(a,a+N, less<ll>());
    sort(b,b+M, less<ll>());

    ll ans = 5001001001;
    rep(i,0,N){
        ll a_num = a[i];
        ll bd = lower_bound(b, b + N+1, a_num) - b;
        ans = min(ans, abs(a[i]-b[bd]));
        if (bd >= 1){
            ans = min(ans, abs(a[i]-b[bd-1]));
        }
        if (bd >= 2){
            ans = min(ans, abs(a[i]-b[bd-2]));
        }
        if (bd >= 3){
            ans = min(ans, abs(a[i]-b[bd-3]));
        }
        if (bd >= 4){
            ans = min(ans, abs(a[i]-b[bd-4]));
        }
        if (bd+1 < M){
            ans = min(ans, abs(a[i]-b[bd+1]));
        }
        if (bd+2 < M){
            ans = min(ans, abs(a[i]-b[bd+2]));
        }
        if (bd+3 < M){
            ans = min(ans, abs(a[i]-b[bd+3]));
        }
        if (bd+4 < M){
            ans = min(ans, abs(a[i]-b[bd+4]));
        }
    }
    cout << ans << endl;
}
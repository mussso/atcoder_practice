#include <iostream>
#include <algorithm>
#include <tuple>
#include <math.h>
#include <cstring>
#include <map>

using namespace std;
#define MAX_N 100100100
#define fore(i,a) for(auto &i:a)
#define rep(i, s, n) for (ll i = (s); i < (ll)(n); i++)

typedef long long ll;

int N, A[301010];
//---------------------------------------------------------------------------------------------------
void _main() {
    cin >> N;
    rep(i, 0, N) cin >> A[i];

    map<int, int> cnt;
    rep(i, 0, N) cnt[A[i]]++;

    ll ans = 0;
    fore(p1, cnt) fore(p2, cnt) {
        if (p1.first > p2.first) continue;
        if (p1.first == p2.first) continue; // due to dans = 0
        // p1.first < p2.first

        ans += 1LL * (p2.first - p1.first) * (p2.first - p1.first) * p1.second * p2.second;
    }
    cout << ans << endl;
}

int main(){
    _main();
}
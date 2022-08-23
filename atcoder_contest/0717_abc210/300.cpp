typedef long long ll;
#include <stdio.h>
#include <iostream>
#include <vector>
#include <math.h>
#include <map>
using namespace std;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
ll N; ll A; int X; int Y;
ll ans;

int N, K, c[301010];

//---------------------------------------------------------------------------------------------------
void _main() {
    cin >> N >> K;
    rep(i, 0, N) cin >> c[i];

    map<int, int> cnt;
    int kinds = 0;
    int ans = 0;

    rep(i, 0, K) {
        if (cnt[c[i]] == 0) kinds++;
        cnt[c[i]]++;
    }
    chmax(ans, kinds);
    
    rep(i, K, N) {
        if (cnt[c[i - K]] == 1) kinds--;
        cnt[c[i - K]]--;
        if (cnt[c[i]] == 0) kinds++;
        cnt[c[i]]++;
        chmax(ans, kinds);
    }

    cout << ans << endl;
}
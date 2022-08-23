#include <iostream>
#include <algorithm>
#include <tuple>
#include <math.h>
#include <string>
#include <map>
#include <bitset>
#include <unordered_set>

using namespace std;
#define MAX_N 100100100
#define fore(i,a) for(auto &i:a)
#define rep(i, s, n) for (ll i = (s); i < (ll)(n); i++)

typedef long long ll;

int main(){
    ll ans,K;
    string N;
    cin >> N >> K;

    rep(i,0,K){
        sort(N.begin(), N.end(),greater<ll>());
        ll g1 = atoll(N.c_str());

        sort(N.begin(), N.end(),less<ll>());
        ll g2 = atoll(N.c_str());

        N = to_string(g1 - g2);
    }

    cout << N << endl;
}
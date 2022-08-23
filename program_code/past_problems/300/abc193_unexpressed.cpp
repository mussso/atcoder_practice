#include <iostream>
#include <algorithm>
#include <tuple>
#include <math.h>
#include <cstring>
#include <map>
#include <bitset>
#include <unordered_set>

using namespace std;
#define MAX_N 100100100
#define fore(i,a) for(auto &i:a)
#define rep(i, s, n) for (ll i = (s); i < (ll)(n); i++)

typedef long long ll;

int main(){
    ll N;
    cin >> N;
    unordered_set<ll> s;
    for(ll a = 2; a * a <= N; a++){
        ll x = a * a;
        while(x <= N){
            s.insert(x);
            x *= a;
        }
    }
    cout << N - s.size() << endl;
}
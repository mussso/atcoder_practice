typedef long long ll;
#include <stdio.h>
#include <math.h>
#include <map>
#include <iostream>
#include <vector>
#include <algorithm>
#include <bitset>
#include <set>
using namespace std;

#define rep(i, s, n) for (ll i = (s); i < (ll)(n); i++)


int main() {
    ll n, a[2001], b[2001]; cin >> n;
    map<ll, ll> mp;

    for (ll i = 0; i < n; i++) cin >> a[i];
    for (ll i = 0; i < n; i++) cin >> b[i];
    sort(b,b+n,less<ll>());
    do {
        set<ll> st;
        rep(i,0,n){
            bitset<2001> A(a[i]);
            bitset<2001> B(b[i]);
            ll ans = (A ^ B).to_ullong();
            st.insert(ans);
        }
        if (st.size() == 1){
            auto itr = st.begin();
            mp[*itr] += 1; 
        }
    } while(next_permutation(b, b + n));

    cout << mp.size() << endl;
    for( auto i = mp.begin(); i != mp.end() ; ++i ) {
      cout << i->first << endl;
    }
}
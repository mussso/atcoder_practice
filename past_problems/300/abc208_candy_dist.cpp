#include <iostream>
#include <algorithm>
#include <cstring>
#include <tuple>
#include <map>

typedef long long ll;
using namespace std;
#define rep(i, s, n) for (ll i = (s); i < (ll)(n); i++)

ll N;
ll K;
ll A[200001];
ll B[200001];

map<ll, ll> s;

int main() {
    cin >> N >> K;
    rep(i, 0, N) cin >> A[i];
    ll divided = K / N;
    ll remain = K % N;

    memcpy(B,A, sizeof(A));
    sort(B,B+N);

    rep(i, 0, N){
        if(i < remain){
            s[B[i]] = divided + 1;
        }
        else {
            s[B[i]] = divided;
        }
    }

    rep(i,0,N){
        cout << s[A[i]];
        if(i<N-1){
          cout << '\n'; 
        }
    }
    cout << endl;
}
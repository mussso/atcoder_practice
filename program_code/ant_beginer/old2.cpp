#include <iostream>
#include <algorithm>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

typedef long long ll;
string S;
int N;

int main() {
	cin >> S;
	N = S.length();
	
	ll ans = 0;
    rep(i,0,1 << (N - 1)) {
		ll sm = 0;
		ll a = S[0] - '0';
        rep(j,0,N - 1) {
			if (i & (1 << j)) {
				sm += a;
				a = 0;
			}
			a = a * 10 + S[j + 1] - '0';
		}
		sm += a;
		ans += sm;
	}
	cout << ans << endl;
}
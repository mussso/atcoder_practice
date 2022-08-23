#include <iostream>
#include <algorithm>
#include <tuple>
#include <math.h>
#include <cstring>

using namespace std;
#define MAX_N 100100100
#define rep(i, s, n) for (ll i = (s); i < (ll)(n); i++)

typedef long long ll;

ll N;
//---------------------------------------------------------------------------------------------------
void _main() {
    cin >> N;

    int ans = 0;
    rep(post, 1, 1010101) {
        ll pre = post;

        string s = to_string(post);
        int digits = s.length();
        rep(_, 0, digits) pre *= 10;

        ll x = pre + post;

        if (x <= N) ans++;
        else break;
    }
    cout << ans << endl;
}

int main(){
    _main();
}



// ll n,ans;
// ll a[MAX_N];
// int main() {
//     cin >> n;
//     a[0] = 0;

//     rep(i,1,n+1){
//         a[i] = a[i-1];
//         string S = to_string(i);
//         ll digit = S.length();
//         if (digit % 2 == 0){
//             string pre = S.substr(0, digit/2);
//             string post = S.substr(digit/2);
//             if (pre == post){
//                 a[i] += 1;
//             }
//         }
//     }

//     cout << a[n] << endl;
// }
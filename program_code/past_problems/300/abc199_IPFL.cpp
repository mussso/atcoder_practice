#include <iostream>
#include <algorithm>
#include <tuple>

using namespace std;
#define MAX_N 1500
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

typedef long long ll;

int N; string S; int Q;
//---------------------------------------------------------------------------------------------------
int main() {
    cin >> N >> S >> Q;

    string pre = S.substr(0, N);
    string post = S.substr(N);

    rep(_, 0, Q) {
        int T, A, B; cin >> T >> A >> B;
        if (T == 1) {
            A--; B--;

            if (B < N) swap(pre[A], pre[B]);
            else if (N <= A) swap(post[A - N], post[B - N]);
            else swap(pre[A], post[B - N]);
        }
        else {
            swap(pre, post);
        }
    }
    cout << pre << post << endl;
}


// int n, q;
// string s;
// int t[MAX_N], a[MAX_N], b[MAX_N];
// int main(){
//     cin >> n >> s >> q;
//     rep(i,0,q){
//         cin >> t[i] >> a[i] >> b[i];
//         a[i]--; b[i]--;
//     }

//     rep(i,0,q){
//         if (t[i] == 1) {
//             swap(s[a[i]], s[b[i]]);

//         } else if (t[i] == 2){
//             rep(j,0,n){
//                 int si = s.size();
//                 swap(s[j],s[s.size()-n]);
//             }
//         }
//     }

// }

#include <iostream>
#include <algorithm>
#include <map>
 
typedef long long ll;
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
 
int N, ans,A[300001];
 
int main() {
    cin >> N;
    rep(i, 0, N) cin >> A[i];

    map<int, int> cnt;
    ll ans = 0;
    rep(j, 0, N) {
        ans += j - cnt[A[j]];
        cnt[A[j]]++;
    }
    cout << ans << endl;
}

// // set をつかったミス
// int main() {
//     cin >> N;
//     for (int i = 1; i <= N; i++) cin >> A[i];
//     for (int i = 1; i <= N; i++) Set.insert(A[i]);

//     ans = 0;
//     auto itr_i = Set.begin();
//     while (itr_i != Set.end()--){
//         auto itr_j = itr_i++;
//         while(itr_j != Set.end()){
//             if((*itr_i) != (*itr_j)){
//                 ans++;
//             }
//             itr_j++;
//         }
//         itr_i++;
//     }
//     cout << ans << endl;
// }


// // count をつかったミス
// int main() {
//     cin >> N;
//     rep(i,0,N) cin >> A[i];
 
//     ans = 0;
//     rep(i,0,N-1){
//         int x = count(A+i+1,A+N,A[i]);
//         int tmp = N - i - 1 - x;
//         ans += tmp;
//     }
//     cout << ans << endl;
// }
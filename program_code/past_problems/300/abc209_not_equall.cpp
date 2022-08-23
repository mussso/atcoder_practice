#include <iostream>
#include <algorithm>
#include <tuple>

using namespace std;
#define MAX_N 1500
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
int N;
int C[201010];

int main() {
    cin >> N;
    rep(i, 0, N) cin >> C[i];
    sort(C, C + N);
    
    int ans = 1;
    rep(i, 0, N) ans *= C[i] - i;
    cout << ans << endl;
}
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


// Function to rotate the matrix 90 degree clockwise
vector<vector<int>> rotate90Clockwise(vector<vector<int>> a)
{
 
    // Traverse each cycle
    for (int i = 0; i < N / 2; i++) {
        for (int j = i; j < N - i - 1; j++) {
 
            // Swap elements of each cycle
            // in clockwise direction
            int temp = a[i][j];
            a[i][j] = a[N - 1 - j][i];
            a[N - 1 - j][i] = a[N - 1 - i][N - 1 - j];
            a[N - 1 - i][N - 1 - j] = a[j][N - 1 - i];
            a[j][N - 1 - i] = temp;
        }
    }
}

int H, W, C;
vector<vector<int>> A;
//---------------------------------------------------------------------------------------------------
ll mi[1010][1010];
ll solve() {
    rep(y, 0, H) rep(x, 0, W) mi[y][x] = A[y][x] - 1LL * C * (y + x);
    rep(y, 0, H) rep(x, 0, W) {
        if (0 < y) chmin(mi[y][x], mi[y - 1][x]);
        if (0 < x) chmin(mi[y][x], mi[y][x - 1]);
    }

    ll res = infl;
    rep(y, 0, H) rep(x, 0, W) {
        ll opt = infl;
        if (0 < y) chmin(opt, mi[y - 1][x]);
        if (0 < x) chmin(opt, mi[y][x - 1]);
        chmin(res, A[y][x] + 1LL * C * (y + x) + opt);
    }

    return res;
}
//---------------------------------------------------------------------------------------------------
void _main() {
    cin >> H >> W >> C;
    A.resize(H);
    rep(y, 0, H) rep(x, 0, W) {
        int a; cin >> a;
        A[y].push_back(a);
    }

    ll ans = infl;
    rep(_, 0, 2) {
        chmin(ans, solve());
        A = rotate90Clockwise(A);
        swap(H, W);
    }
    cout << ans << endl;
}
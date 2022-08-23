#include <iostream>
#include <algorithm>
#include <tuple>
#include <math.h>

using namespace std;
#define MAX_N 1500
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

typedef long long ll;

int N; string S; int Q;

//---------------------------------------------------------------------------------------------------
int main() {
    ll R,X,Y;
    cin >> R >> X >> Y;

    double distance = sqrt(X * X + Y * Y);
    int ans = ceil(distance / R);
    if (ans == 1 && distance != R) ans++;

    cout << ans << endl;
}


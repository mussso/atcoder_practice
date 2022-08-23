typedef long long ll;
#include <stdio.h>
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
ll N; ll A; int X; int Y;
ll ans;

int main() {
    cin >> N >> A >> X >> Y;
    if(N <= A){
        ans = X * N;
    } else {
        ans = A * X + (N-A)*Y;
    }
    cout << ans << endl;
}

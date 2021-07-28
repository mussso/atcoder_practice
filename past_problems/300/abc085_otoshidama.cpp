typedef long long ll;
#include <stdio.h>
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
int N; ll Y;

int _main() {
    cin >> N >> Y;
    rep(a, 0, N + 1) {
        rep(b, 0, N + 1){ 
            int c = N - (a + b);
            if (0 <= c) {
                if (10000LL * a + 5000LL * b + 1000LL * c == Y) {
                    printf("%d %d %d\n", a, b, c);
                    return 0;
                }
            }
        }
    }
    printf("-1 -1 -1\n");
}

int main(){
   int res = _main();
}
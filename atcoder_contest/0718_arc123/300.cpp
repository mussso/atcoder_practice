typedef long long ll;
#include <stdio.h>
#include <iostream>

using namespace std;

ll A; ll B; ll C;
ll tmp;
ll ans;

int main() {
    cin >> A >> B >> C;
    tmp = A + C - 2*B;
    if(tmp == 0) ans = 0;

    while (tmp != 0){
        if (tmp < 0){
            A -= tmp;
            ans -= tmp;
        } else {
            B += tmp / 2;
            ans += tmp / 2;
        }
        tmp = A + C - 2*B;
    }
    cout << ans << endl;
}
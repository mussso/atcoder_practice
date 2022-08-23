typedef long long ll;
#include <stdio.h>
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int A,B;
string ans;

int main() {
    cin >> A >> B;
    if (A > 0 && B > 0){
        ans = "Alloy";
    } else if (A > 0 && (B == 0)){
        ans = "Gold";
    } else {
        ans = "Silver";
    }
    cout << ans << endl;
}

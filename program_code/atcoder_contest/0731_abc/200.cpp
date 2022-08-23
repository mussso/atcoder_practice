typedef long long ll;
#include <stdio.h>
#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
int s1, s2, s3, s4;
string ans;
string s;

int main() {
    cin >> s;
    s1 = (int)(s[0] - '0');
    s2 = (int)(s[1] - '0');
    s3 = (int)(s[2] - '0');
    s4 = (int)(s[3] - '0');

    ans = "Strong";
    if (s1 == s2 && s3 == s4 && s1 == s3) ans = "Weak";
    else if (s2 == (s1+1)%10 && s3 == (s2+1)%10 && s4 == (s3+1)%10 ) ans = "Weak";
    cout << ans << endl;
}

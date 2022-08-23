typedef long long ll;
#include <stdio.h>
#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
string s1, s2, s3, s4;
string ans;
string s[5];

int main() {
    ans = "Yes";
    rep(i,0,4) cin >> s[i];

    int f = find(s, s + 4, "H") - s;
    if (f == 4) ans = "No";

    int g = find(s, s + 4, "2B") - s;
    if (g == 4) ans = "No";

    int h = find(s, s + 4, "3B") - s;
    if (h == 4) ans = "No";

    int i = find(s, s + 4, "HR") - s;
    if (i == 4) ans = "No";

    cout << ans << endl;
}

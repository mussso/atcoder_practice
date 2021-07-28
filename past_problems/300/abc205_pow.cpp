#include <iostream>
#include <algorithm>
#include <map>
#include <cmath>
#include <limits>
 
typedef long long ll;
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
 
ll A,B,C;
string ans;

int main() {
    cin >> A >> B >> C;

    if (C % 2 == 0) C = 2;
    else C = 1;

    if (pow(A, C) == pow(B, C)) cout << "=" << endl;
    else if (pow(A, C) < pow(B, C)) cout << "<" << endl;
    else cout << ">" << endl;
}

// int main() {
//     cin >> A >> B >> C;
//     ll ans_A = pow(A,C);
//     ll ans_B = pow(B,C);

//     if (ans_A > ans_B){ ans = '>';}
//     else if (ans_A < ans_B){ ans = '<';}
//     else { ans = '=';}
    
//     cout << ans << endl;
// }
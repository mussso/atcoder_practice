typedef long long ll;
#include <stdio.h>
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
ll N;
string S;
string ans;

int main() {
    cin >> N >> S;
    rep(s,0,N){
        if(S.at(s) == '1' && (s % 2) == 0){
            ans = "Takahashi";
            break;
        } else if (S.at(s) == '1' && (s % 2) == 1){
            ans = "Aoki";
            break;
        }
    }
    cout << ans << endl;
}

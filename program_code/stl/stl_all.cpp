#include <iostream>
#include <string>
#include <vector>
#include <bitset>
#include <map>
#include <queue>
#include <set>
using namespace std;

#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long ll;
#define MAX_N 10010

int main() {
    int n; cin >> n;
    // int bit = 6;
    // bitset<8> a(bit);
    // cout << a << endl;

    // vector<vector<int>> b;
    // int d[MAX_N];

    // rep(i,0,n){
    //     cin >> d[i];
    // }
    // rep(i,0,n){
    //     b.push_back(d[i]);
    // }

rep(bit,0,1 << n){
    cout << bit;
    vector<int> s;

    rep(i,0,n){
        if (bit & 1 << i){
            s.push_back(bit);
        }
    }

}


}
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long aaa = 12656242944 - 12222222345;
    string s;
    cin >> s;
    int n = s.size();
    long long sum;
    for (int i=1; i<=n ;i++){
        long long st = atoll(s.substr(0,i).c_str());
        long long ed = atoll(s.substr(i,n).c_str());
        sum += st + ed;
    }
    for (int i=0; i<n ;i++){
        long long in = atoll(s.substr(i,1).c_str());
        sum += in;
    }

    cout << sum << endl;
}
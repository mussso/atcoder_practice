#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s = "1123";
    int i = atoi(s.substr(1,2).c_str());

    // 例 1: 2 つの整数 a, b を入力し、a と b の最大公約数と最小公倍数を出力する
    int a, b;
    cin >> a >> b;
    cout << __gcd(a, b) << endl;
    cout << a / __gcd(a, b) * b << endl;
    return 0;
}
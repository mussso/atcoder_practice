typedef long long ll;
#include <stdio.h>
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
double A; double B ; double C;
ll ans;

int main() {
    cin >> A >> B;
    C = (A-B)/3 + B;
    cout << C << endl;
}

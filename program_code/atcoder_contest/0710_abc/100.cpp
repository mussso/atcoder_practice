#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;
int a, b;

int main() {
	cin >> a >> b;
    int count =0;
    if (b<=a) {
        count =0;
    } else {
        count = b - a  + 1;
    }
    cout << count << endl;
}
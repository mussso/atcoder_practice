#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;
int a, b;

int main() {
	cin >> a >> b;

    int count = 0;
	for (int i=a;i<=b; i++){
        if(a<=i and i <=b){
            count++;
        }
    }
    cout << count << endl;
}

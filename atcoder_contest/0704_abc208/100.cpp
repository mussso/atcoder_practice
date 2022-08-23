#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int c = a * 6;
    if (b <= c){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }
}
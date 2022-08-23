#include <iostream>
using namespace std;

int main() {
    int a,b;
    int res = 0;
    cin >> a >> b;
    bool exist = false;
    for (int i=0; i < a; i++){
        for (int j=1; j < 7; j++) {
            res += 1;
            if (res == b){
                exist = true;
            }
        }
    }
    if (exist){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
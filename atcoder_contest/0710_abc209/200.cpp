#include <iostream>
#include <algorithm>
using namespace std;
#define MAX_N 101

typedef long long ll;
int n, x;
string ans = "Yes";
int a[MAX_N];

int main() {
	cin >> n >> x;
    for(int i=1;i<n+1;i++){
        cin >> a[i];
    }

    for (int i = 1; i < n+1; i++)
    {
        if(i % 2 == 0){
            a[i] -= 1;
        }
        x -= a[i];

        if (x < 0){
            ans = "No";
        }
    }
    cout << ans << endl;
}
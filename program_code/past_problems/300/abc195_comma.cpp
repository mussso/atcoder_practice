#include <iostream>
#include <algorithm>
#include <tuple>
#include <math.h>
#include <cstring>

using namespace std;
#define MAX_N 100100100
#define rep(i, s, n) for (ll i = (s); i < (ll)(n); i++)

typedef long long ll;

ll n,ans;
//---------------------------------------------------------------------------------------------------
void _main() {
    cin >> n;

    if(n < pow(10,3)){
        ans = 0;
    } 
    else if(n < pow(10,6)){
        ans = (n-(pow(10,3)-1));
    }
    else if(n < pow(10,9)){
        ans = (n-(pow(10,3)-1))+(n-(pow(10,6)-1));
    }
    else if(n < pow(10,12)){
        ans = (n-(pow(10,3)-1))+(n-(pow(10,6)-1))+(n-(pow(10,9)-1));
    }
    else if(n < pow(10,15)){
        ans = (n-(pow(10,3)-1))+(n-(pow(10,6)-1))+(n-(pow(10,9)-1))+(n-(pow(10,12)-1));
    }
    else if(n < pow(10,18)){
        ans = (n-(pow(10,3)-1))+(n-(pow(10,6)-1))+(n-(pow(10,9)-1))+(n-(pow(10,12)-1))+(n-(pow(10,15)-1));
    }

    cout << ans << endl;
}

int main(){
    _main();
}
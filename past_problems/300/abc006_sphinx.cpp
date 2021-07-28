#include <iostream>
#include <algorithm>
#include <tuple>

using namespace std;
#define MAX_N 1500
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

typedef long long ll;
ll n, m;
int a,b,c;
ll ans;

std::tuple<int, int, int> _main() {
	cin >> n >> m;
    if (n < 1 || m < 1 ){
        return forward_as_tuple(-1,-1,-1);
    }

    rep(i,0,2){
        rep(j,0,n+1){
            int k = n - i - j; 
            ans = 3*i + 2*j + 4*k;
            if(ans == m && k >= 0){
                return forward_as_tuple(j, i ,k);
            }
        }
    }
    return forward_as_tuple(-1,-1,-1);
}

int main(){
    tie(a, b, c) =_main();
    cout << a << ' ' << b << ' ' << c << endl;
}
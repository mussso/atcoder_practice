#include <iostream>
#include<queue>
#include <stdio.h>
#include <functional>
#include <algorithm>

#define MAX_N 200001
using namespace std;

typedef long long ll;
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

ll N,K;
ll ans;
pair<ll, ll> A[MAX_N];

ll _main(){
    cin >> N >> K;
    for (int i=0; i<N; i++){
        cin >> A[i].first >> A[i].second;
    }
    sort(A, A + N, less<pair<ll, ll>>());

    queue<ll> que;
    ll pos = 0;
    ll money = K;

    for (int i=0; i<N; i++){
        ll d = A[i].first - pos;
         while (money - d < 0)
         {
            if (que.empty())
            {
                ans = pos + money;
                return 0;
            }
            money += que.front();
            que.pop();
         }
         money -= d;
         pos = A[i].first;
         que.push(A[i].second);
    }

    while(!que.empty()){
        money += que.front();
        que.pop();
    }
    ans = pos + money;
    return 0;
}

int main(){
    _main();
    cout << ans << endl;
}
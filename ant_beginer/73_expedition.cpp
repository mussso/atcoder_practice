#include <iostream>
#include<queue>
#include <stdio.h>
#define MAX_N 10000
using namespace std;

int L, P, N;
int A[MAX_N+1], B[MAX_N+1];

int main(){
    cin >> N >> L >> P;
    for (int i=0; i<N; i++){
        cin >> A[i] >> B [i];
    }

    A[N] = L;
    B[N] = 0;
    N++;

    priority_queue<int> que;
    int ans = 0, pos = 0, tank = P;

    for (int i=0; i<N; i++){
        int d = A[i] - pos;
         while (tank - d < 0)
         {
            if (que.empty())
            {
                puts("-1");
                return 0;
            }
            tank += que.top();
            que.pop();
            ans++;
         }
         tank -= d;
         pos = A[i];
         que.push(B[i]);
    }
    printf("%d\n", ans);
}

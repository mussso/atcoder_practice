#include <iostream>
#include<queue>
#include <stdio.h>
#define MAX_N 10000
#define MAX_K 100000
using namespace std;


// union find implementation 
int par[MAX_N];
int ranking[MAX_N];

void init(int n){
    for(int i=0;i<n;i++){
        par[i] = i;
        ranking[i] = 0;
    }
}

int find(int x){
    if(par[x]==x){
        return x;
    } else {
        return par[x] = find(par[x]);
    }
}

void unite(int x, int y){
    x = find(x);
    y = find(y);
    if (x == y){
        return ;
    }

    if (ranking[x] < ranking[y]){
        par[x] = y;
    } else {
        par[y] = x;
        if (ranking[x] == ranking[y]) ranking[x]++;
    }
}

bool same(int x, int y){
    return find(x) == find(y);
}



// use union find

int N, K;
int T[MAX_K],X[MAX_K],Y[MAX_K];


int main(){
    cin >> N >> K;
    for (int i = 0; i < K; i++)
    {
        cin >> T[i] >> X[i] >> Y[i];
    }

    init(N*3);
    
    int ans = 0;
    for (int i = 0; i < K; i++)
    {
        int t = T[i];
        int x = X[i] - 1, y = Y[i] - 1;

        if (x<0 || N<=x || y<0 || N<=y){
            ans++;
            continue;
        }

        if (t == 1){
            if(same(x,y+N) || same(x,y+2*N)){
                ans++;
            }
            else{
                unite(x,y);
                unite(x+N,y+N);
                unite(x+2*N,y+2*N);

            }
        }
        else {
            if(same(x,y) || same(x,y+2*N)){
                ans++;
            }
            else{
                unite(x,y+N);
                unite(x+N,y+2*N);
                unite(x+2*N,y);
            }
        }

    }
    printf("%d\n", ans);
} 


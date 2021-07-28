#include <stdio.h>
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int w,h;
char field[100][101];

void dfs(int x, int y){
    field[x][y] = '.';
    rep(dx,-1,2){
        rep(dy,-1,2){
            int nx=x+dx, ny=y+dy;
            if (0 <= nx && nx < w && 0 <= ny && ny < h && field[nx][ny] =='W') dfs(nx,ny); 
        }
    }
    return ;
}

void solve(){
    int res = 0;
    rep(i,0,w){
        rep(j,0,h){
            if (field[i][j] == 'W'){
                dfs(i,j);
                res++;
            }
        }
    }
    printf("%d\n", res);
}

int main() {
  cin >> h >> w;
  rep(x,0,h){
      rep(y,0,w){
          cin >> field[x][y];
      }
  }
  solve();
}
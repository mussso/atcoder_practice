#include <iostream>
#include<queue>
#define MAX_N 101
#define MAX_M 101
using namespace std;
const int INF = 100000000;

typedef pair<int, int> P;

char maze[MAX_N][MAX_M + 1];
int N, M;
int tx, ty;
int x, y;

int d[MAX_N][MAX_M];

int dx[4] = { 1,0,-1,0 }, dy[4] = { 0,1,0,-1 }; //(1,0) (0,1),(-1,0),(0,-1)


int bfs(int sx, int sy, int gx, int gy) {
	queue<P> que;
	for (int i = 1; i < N+1; ++i)
	{
		for (int j = 1; j < M+1; ++j) d[i][j] = INF;
	}
	que.push(P(sx, sy));
	d[sx][sy] = 0;

	while (que.size())
	{
		P p = que.front(); que.pop();
		if (p.first == gx && p.second == gy) break;
		for (int i = 0; i < 4; ++i)
		{
			int nx = p.first + dx[i], ny = p.second + dy[i];	
			if (1 <= nx && nx < N && 1 <= ny && ny < M && maze[nx][ny] != '#' && d[nx][ny] == INF)
			{
				que.push(P(nx, ny));
				d[nx][ny] = d[p.first][p.second] + 1;
			}
		}
	}
	return d[gx][gy];
}


int main()
{
	cin >> N >> M;
	cin >> tx >> ty >> x >> y;
	for (int i = 1; i < N+1; ++i)
	{
		for (int j = 1; j < M+1; ++j) {
			cin >> maze[i][j];
		}
	}
	int res = bfs(tx, ty, x, y);
	if (res != INF)
		cout << res << endl;
	else
		cout << "No" << endl;
	return 0;
}
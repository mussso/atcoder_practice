# https://atcoder.jp/contests/abc007/tasks/abc007_3

from collections import deque

r, c = map(int, input().split())
sy, sx = map(int, input().split())
gy, gx = map(int, input().split())
sy, sx, gy, gx = sy-1, sx-1, gy-1, gx-1

mapping = [[i for i in input()] for _ in range(r)]
value = [[-1]*c for _ in range(r)]
direction = [(0,1),(1,0),(-1,0),(0,-1)]


def bfs(sy, sx, gy, gx,mapping,value):
    que = deque()
    que.append([sy, sx])
    value[sy][sx] = 0

    while que:
        point = que.popleft()
        if point == [gy, gx]:
            print(value[gy][gx])
            return

        for direc in direction:
            next_y = point[0] + direc[0]
            next_x = point[1] + direc[1]
            if (mapping[next_y][next_x] == ".") and (value[next_y][next_x] == -1):
                value[next_y][next_x] = value[point[0]][point[1]] + 1
                que.append([next_y, next_x])

bfs(sy, sx, gy, gx,mapping,value)

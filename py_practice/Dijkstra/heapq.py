# https://atcoder.jp/contests/abc012/tasks/abc012_4

import heapq

def dijkstra(s):
    hq = [(0, s)]
    heapq.heapify(hq) # リストを優先度付きキューに変換
    cost = [float('inf')] * n # 行ったことのないところはinf
    cost[s] = 0 # 開始地点は0
    while hq:
        cur_cost, cur_pos = heapq.heappop(hq)
        if cur_cost > cost[cur_pos]: # コストが現在のコストよりも高ければスルー
            continue
        for next_cost, next_pos in e[cur_pos]:
            tmp = next_cost + cost[cur_pos]
            if tmp < cost[next_pos]:
                cost[next_pos] = tmp
                heapq.heappush(hq, (tmp, next_pos))
    return cost

n,m = map(int,input().split())
e = [[] for _ in range(n)]
for _ in range(m):
    a,b,t = map(int,input().split())
    a,b = a-1, b-1
    e[a].append((t, b))
    e[b].append((t, a))
ans = float('inf')
for i in range(n):
    dist = dijkstra(i)
    ans = min(ans, max(dist))
print(ans)

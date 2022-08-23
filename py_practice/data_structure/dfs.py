# https://atcoder.jp/contests/abc138/tasks/abc138_d

N, Q = map(int, input().split())
tree = [[] for _ in range(N)]

for _ in range(N-1):
    a, b = map(int, input().split())
    tree[a-1].append(b-1)
    tree[b-1].append(a-1)

X = [0]*N
for _ in range(Q):
    p, x = map(int, input().split())
    X[p-1] += x

ans = [0]*N

def dfs(child, parent=None):
    """
    u: 子ノード
    parent: 親ノード
    """
    ans[child] = ans[parent] + X[child]
    for v in tree[child]:
        if v != parent:
            dfs(v, child)

dfs(0, 0)
print(' '.join([str(i) for i in ans]))

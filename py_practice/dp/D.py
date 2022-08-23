# https://atcoder.jp/contests/dp/tasks/dp_d

def main():
    N, W = map(int, input().split())
    weight_value = [map(int, input().split()) for _ in range(N)]
    weight, value = [list(i) for i in zip(*weight_value)]

    dp = [[0]*(W+1) for _ in range(N+1)]

    for i in range(N):
        for w in range(W+1):
            if w >= weight[i]:
                dp[i+1][w] = max(dp[i][w], dp[i][w-weight[i]]+value[i])
            else:
                dp[i+1][w] = dp[i][w]
    print(dp[N][W])


if __name__ == "__main__":
    main()

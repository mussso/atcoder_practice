# https://atcoder.jp/contests/dp/tasks/dp_b

def main():
    N, K = map(int, input().split())
    weight_value = list(map(int, input().split()))
    dp = [float('inf') for _ in range(N+1)]
    dp[0] = 0
    dp[1] = abs(weight_value[0] - weight_value[1])

    for i in range(2,N):
        num = min(K, i)
        for k in range(1,num+1):
            dp[i] = min(
                dp[i],
                dp[i-k] + abs(weight_value[i-k]-weight_value[i])
            )

    print(dp[N-1])


if __name__ == "__main__":
    main()

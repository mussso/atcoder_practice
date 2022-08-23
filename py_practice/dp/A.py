# https://atcoder.jp/contests/dp/tasks/dp_a

def main():
    N = int(input())
    weight_value = list(map(int, input().split()))
    dp = [0 for _ in range(N+1)]
    dp[1] = abs(weight_value[0] - weight_value[1])

    for i in range(N-2):
        dp[i+2] = min(
            dp[i+1] + abs(weight_value[i+1]-weight_value[i+2]),
            dp[i] + abs(weight_value[i]-weight_value[i+2])
        )
    print(dp[N-1])


if __name__ == "__main__":
    main()

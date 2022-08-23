# https://atcoder.jp/contests/dp/tasks/dp_f

from re import S


def main():
    S = str(input())
    T = str(input())
    dp = [[0]*len(T) for _ in range(len(S))]

    for i in range(len(S)):
        for j in range(len(T)):
            if S[i] == T[j]:
                dp[i][j] = dp[i-1][j-1] + 1
            else:
                dp[i][j] = max(dp[i-1][j], dp[i][j-1])

if __name__ == "__main__":
    main()

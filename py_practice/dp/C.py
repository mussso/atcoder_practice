# https://atcoder.jp/contests/dp/tasks/dp_c

def main():
    N = int(input())
    a = [0] * N
    b = [0] * N
    c = [0] * N
    for i in range(N):
        #上から順番に代入していく
        a[i], b[i], c[i] = map(int, input().split())

    dp = [[0]*3 for _ in range(N+1)]
    for i in range(N):
        dp[i][0] = max(dp[i-1][1]+a[i], dp[i-1][2]+a[i])
        dp[i][1] = max(dp[i-1][0]+b[i], dp[i-1][2]+b[i])
        dp[i][2] = max(dp[i-1][0]+c[i], dp[i-1][1]+c[i])
    ans = max(dp[N-1][0], dp[N-1][1], dp[N-1][2])
    print(ans)

if __name__ == "__main__":
    main()


    # ans = 0
    # max_index = None
    # for i in range(N):
    #     array = [a[i],b[i],c[i]]
    #     if max_index:
    #         array[max_index] = 0
    #     max_value = max(array)
    #     max_index = array.index(max_value)
    #     ans += max_value
    # print(ans)


def main():
    n, a, b = map(int, input().split())
    ans = 0
    for i in range(n+1):
        i = str(i)
        sum_num = 0
        for j in range(len(i)):
            num = int(i[j])
            sum_num += num
        if a <= sum_num <= b:
            ans += int(i)
    print(ans)

if __name__ == "__main__":
    main()
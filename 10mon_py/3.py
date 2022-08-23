
def main():
    n = int(input())
    a = list(map(int, input().split()))
    ans = 0
    while True:
        for i in a:
            if i % 2 != 0:
                print(ans)
                return
        a = list(map(lambda x: x/2, a))
        ans += 1

if __name__ == "__main__":
    main()
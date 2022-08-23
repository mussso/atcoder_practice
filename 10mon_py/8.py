
def main():
    n, y = map(int, input().split())
    for i in range(n+1):
        for j in range(n-i+1):
            k = n - i - j
            amount = 10000*i + 5000*j + 1000*k
            if amount == y:
                print(f"{i} {j} {k}")
                return
    print("-1 -1 -1")

if __name__ == "__main__":
    main()
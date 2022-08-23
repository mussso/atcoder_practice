
def main():
    n = int(input())
    num_li = [ int(input()) for _ in range(n)]
    num_li = set(num_li)
    ans = len(num_li)
    print(ans)

if __name__ == "__main__":
    main()
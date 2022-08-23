
def main():
    x = int(input())
    values = list(map(int, input().split()))

    pl = 0
    pr = len(values) - 1
    while True:
        pc = (pl + pr) // 2
        if values[pc] == x:
            print("find!!")
            print(f"idx is {pc}")
            break
        elif values[pc] < x:
            pl = pc + 1
        elif values[pc] > x:
            pr = pc - 1
        if pr < pl:
            print("not found!!")
            break

if __name__ == "__main__":
    main()

    
from itertools import product


def reverse(x, start):
    length = len(x)
    if start > length // 2:
        return 
    x[start], x[length-start-1] = x[length-start-1], x[start]
    start += 1
    reverse(x, start)

def main():
    x = list(map(int, input().split()))
    start = 0
    reverse(x, start)
    print(x)

if __name__ == "__main__":
    main()

    
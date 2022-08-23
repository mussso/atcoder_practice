from itertools import product


def Fib(n):    
    if n == 1:
        return 0
    elif n == 2:
        return 1
    else:
        return Fib(n-1) + Fib(n-2)


def main():
    x = int(input())
    ans = Fib(x)
    print(ans)

if __name__ == "__main__":
    main()

    
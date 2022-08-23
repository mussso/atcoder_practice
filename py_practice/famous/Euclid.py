from itertools import product


def Euclid(x,y):
    if y == 0:
        print(x)
        return 
    red = x % y
    Euclid(y, red)


def main():
    x, y = map(int, input().split())
    Euclid(x,y)

if __name__ == "__main__":
    main()

    
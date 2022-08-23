
def main():
    a, b = map(int, input().split())
    ans = a * b

    if ans % 2 == 0:
        print("Even")
    else:
        print("Odd")

if __name__ == "__main__":
    main()
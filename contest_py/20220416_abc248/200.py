

def main():
    a, b, k = map(int, input().split())
    amount = a
    count = 0
    while True:
        if amount >= b:
            break
        amount *= k
        count += 1
    print(count)


if __name__ == "__main__":
    main()



def main():
    n = str(input())
    for num in range(0,10):
        if str(num) in n:
            continue
        else:
            print(num)
            return


if __name__ == "__main__":
    main()

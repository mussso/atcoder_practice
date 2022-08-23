
def main():
    x = int(input())
    if x in [0, 1]:
        print("NOT PRIME NUMBER")
        return

    for i in range(2, x):
        res = x % i
        if res == 0:
            print("NOT PRIME NUMBER")
            return
    print("PRIME NUMBER")

if __name__ == "__main__":
    main()

    
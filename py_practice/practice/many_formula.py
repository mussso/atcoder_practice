from itertools import product

def main():
    s = input()
    n = len(s)
    ans = 0

    for p in product((0, 1), repeat=n-1):
        tmp_s = s[0]
        for i, value in enumerate(p):
            if value == 0:
                tmp_s += s[i+1]
            else:
                ans += int(tmp_s)
                tmp_s = s[i+1]
        ans += int(tmp_s)
    print(ans)

if __name__ == "__main__":
    main()

    
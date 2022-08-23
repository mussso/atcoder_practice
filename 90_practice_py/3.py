## 解説見た後AC
from itertools import product

def main():
    s = int(input())
    if s % 2 == 1:
        return
    for p in product((0, 1), repeat=s):
        count = 0
        ans = ""
        for i in p:
            if i == 0:
                count += 1
                ans += "("
            else:
                count -= 1
                ans += ")"
            if count < 0:
                break
        if count == 0 and p[0] == 0 and p[-1] == 1:
            print(ans)

if __name__ == "__main__":
    main()



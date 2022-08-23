## まだ
# def main():
#     a, b = map(int, input().split())
#     ans = 32**(a - b)
#     print(ans)

import copy
def main():
    s = list(input())
    t = list(input())
    if s == t:
        print("Yes")
        return

    for i in range(len(s)-1):
        tmp_s = copy.copy(s)
        tmp = tmp_s[i]
        tmp_s[i] = tmp_s[i+1]
        tmp_s[i+1] = tmp
        if tmp_s == t:
            print("Yes")
            return
    print("No")

if __name__ == "__main__":
    main()

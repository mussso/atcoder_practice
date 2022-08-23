from itertools import product
import collections

def main():
    n, k = map(int, input().split())
    S = [str(input()) for _ in range(n)]

    final = 0
    for p in product((0, 1), repeat=n):
        array = []
        for i,j in enumerate(p):
            if p[i] == 1:
                array.append(S[i])
        string = "".join(array)
        if not string:
            continue
        c = collections.Counter(string)
        li_key = list(c.keys())
        cnt_li =[]
        for key in li_key:
            ans = 0
            for word in array:
                is_include = key in word
                if is_include:
                    ans += 1
            if ans == k:
                cnt_li.append(ans)
        if len(cnt_li) > final:
            final = len(cnt_li)

    print(final)

if __name__ == "__main__":
    main()

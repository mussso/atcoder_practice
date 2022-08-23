from itertools import product


def main():
    h1, h2, h3, w1, w2, w3 = map(int, input().split())
    min_val = min(h1, h2, h3, w1, w2, w3)
    max_val = max(h1, h2, h3, w1, w2, w3)

    ans = 0
    if min_val < 3:
        return ans
    if max_val > 27:
        return ans
    if h1+h2+h3 != w1+w2+w3:
        return ans

    for i in range(h1):
        for j in range(h1-i):
            k = h1 - i - j
            if k > 0:
                ans += 1

if __name__ == "__main__":
    main()

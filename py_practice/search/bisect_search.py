from bisect import bisect_right

def search(t, i):
    """
    t: list 探索元の数列
    i: int 探索する値
    """
    ix = bisect_right(t, i)
    if t[ix-1] != i:
        return False
    return True

t = [1,3,5,6,7,10]
i = 7

print(search(t, i))  # True

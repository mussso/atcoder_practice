import time

def main():
    start_time =  time.time()
    h, w = map(int, input().split())
    m = [list(input()) for l in range(h)]
    i = 0
    j = 0
    point = m[i][j]
    while True:
        if point == "U":
            if i-1 == -1:
                break
            i -= 1
        elif point == "D":
            if i+1 == h:
                break
            i += 1
        elif point == "L":
            if j-1 == -1:
                break
            j -= 1
        elif point == "R":
            if j+1 == w:
                break
            j += 1
        point = m[i][j]
        if time.time() - start_time > 1.8:
            print(-1)
            return
    print(f"{i+1} {j+1}")
    return

if __name__ == "__main__":
    main()


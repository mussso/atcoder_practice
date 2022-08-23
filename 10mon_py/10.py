
def main():
    n = int(input())
    all = [list(map(int, input().split())) for i in range(n)]
    
    flag = "Yes"
    for li in all:
        sum = li[1] + li[2]
        time = li[0]
        if (sum <= time) and (time %2 == sum%2) and (li[1]>=0) and (li[2]>=0):
            continue
        else:
            flag = "No"
            print(flag)
            return
    print(flag)
    return
        
if __name__ == "__main__":
    main()
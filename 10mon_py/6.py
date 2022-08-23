
def main():
    n = int(input())
    num_list = list(map(int, input().split()))
    alice = 0
    bob = 0
    num_list = sorted(num_list, reverse=True)
    for i,value in enumerate(num_list):
        if i % 2 == 0:
            alice += value
        else:
            bob += value
    ans = alice - bob
    print(ans)

if __name__ == "__main__":
    main()

def main():
    x = int(input())
    bit_prime = [1]*(x+1)
    bit_prime[0] = 0
    bit_prime[1] = 0

    for i in range(2, x+1):
        if bit_prime[i]:
            for j in range(2, x+1):
                idx = i * j
                if idx > x:
                    break
                bit_prime[idx] = 0
    print(bit_prime[x])

if __name__ == "__main__":
    main()

    
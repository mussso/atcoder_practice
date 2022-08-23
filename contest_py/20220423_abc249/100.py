

def main():
    a, b, c, d, e, f, x = map(int, input().split())
    if x - (a+c) < 0:
        takashi = a * b
    else:
        if (x-int((a+c)*int(x/(a+c)))) < a:
            takashi = int(x/(a+c))*a*b + (x-int((a+c)*int(x/(a+c))))*b
        else:
            takashi = int(x/(a+c))*a*b + a*b

    if x - (d+f) < 0:
        aoki = d * e
    else:
        if (x-int((d+f)*int(x/(d+f)))) < d:
            aoki = int(x/(d+f))*e + (x-int((d+f)*int(x/(d+f))))*e
        else:
            aoki = int(x/(d+f))*e + d*e

    if aoki == takashi:
        print("Draw")
    elif aoki > takashi:
        print("Aoki")
    else:
        print("Takahashi")


if __name__ == "__main__":
    main()

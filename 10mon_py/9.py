
def main():
    s = input()
    s = "".join(list(reversed(s)))
    find_li = ["maerd", "remaerd", "esare", "resare"]

    while True:
        flag = False
        for word in find_li:
            length = len(word)
            if s[:length] == word:
                s = s[length:]
                flag = True
            if len(s) == 0:
                print("YES")
                return        
        if flag == False:
            print("NO")
            return
        
if __name__ == "__main__":
    main()
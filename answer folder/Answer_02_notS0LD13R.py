def main():
    dig=input()
    if int(dig)>9:print(int(dig[0])+int(dig[-1]))
    else:print(dig)

if __name__=="__main__":
    for _ in range(int(input())):
        main()
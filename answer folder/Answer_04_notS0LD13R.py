from math import sqrt
def main():
    n=int(input())
    sq=0
    while n>0:
        sq+=1
        n-=int(sqrt(n))**2
    print(sq)    

if __name__=="__main__":
    for _ in range(int(input())):
        main()
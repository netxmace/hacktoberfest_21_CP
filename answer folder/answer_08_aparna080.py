#python code

t=int(input())
while(t):
    n,a,b=map(int,input().split())
    sarthak=anuradha=0
    d=['E','Q','U','I','N','O','X']
    for i in range(n):
        x=input()
        if x[0] in d:
            sarthak+=a 
        else:
            anuradha+=b
    if sarthak==anuradha:
        print("DRAW")
    elif sarthak>anuradha:
        print("SARTHAK")
    else:
        print("ANURADHA")
        
    t-=1 

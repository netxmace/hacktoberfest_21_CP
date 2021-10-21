#python code

t=int(input())
while(t):
    n=int(input())
    
    reverse=0
    while(n > 0):
        reverse = (reverse *10) + n%10
        n//=10
    print(reverse)
    t-=1

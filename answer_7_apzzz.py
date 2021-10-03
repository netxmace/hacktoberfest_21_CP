#python code

t=int(input())
while(t):
  a,b,c,d=map(int,input().split())
  if a+c==180 and b+d==180:
    print("YES")
  else:
    print("NO")
  t-=1

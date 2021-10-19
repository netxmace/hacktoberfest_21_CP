


t=int(input())
for inp in range(t):
    new_case=int(input())
    count=0
    while new_case>0:
        new_case-=(int(new_case**0.5))**2
        count+=1
    print(count)
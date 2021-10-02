import math
c = input()
c = int(c)
sq=0
while c>0:
    num = int(input())
    while num>0:
        num_sqrt = math.sqrt(num)
        num_prev = int(num_sqrt)
        sqr_prev = num_prev * num_prev
        num = num - sqr_prev
        sq = sq + 1 
    print(sq)
    sq =0
    c = c-1

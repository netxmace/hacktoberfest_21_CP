# Question 3 (reverse the given number)

t = int(input())

for _ in range(t):
    n = int(input())
    num = n
    rev = 0

    while(num > 0):
        digit = num % 10
        num //= 10
        rev = (rev * 10) + digit

    print(rev)

T = int(input())
while T > 0:
    n = (input())
    reverse = n[::-1]
    reverse = int(reverse)
    n = int(n)
    first_digit = reverse % 10
    last_digit = n % 10
    sum = first_digit + last_digit
    print(sum)
    T = T - 1

# Question 2 (Sum of first and last digits of a number)

from math import ceil, pow, log10

n = int(input())

first = n % 10
digits = ceil(log10(n))
last = n // pow(10, digits-1)

sum = first + last

print(int(sum))

# Q1 - Take two numbers and find the difference if first no is greater than the second, and the sum otherwise

a, b = [int(i) for i in input().split()]
print(a-b if a>b else a+b)
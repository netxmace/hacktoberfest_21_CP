n1 = int(input())
n2 = int(input())
if (n1>=-1000 and n1<=1000) and (n2>=-1000 and n2<=1000):
	if (n1>n2):
		print(f'{n1-n2}')
	else:
		print(f'{n1+n2}')
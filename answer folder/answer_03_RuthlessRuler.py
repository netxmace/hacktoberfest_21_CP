test = int(input())
if (test<=10**3) and (test>=1):		
	while test!=0:
		s1 = input()
		is1 = int(s1)
		if (is1<=10**6 and is1>=1):
			print(s1[::-1])
		test-=1

def akk (n, m):
	if n==0:
		return m+1;
	elif n!=0 and m==0:
		return akk(n-1, 1)
	else:
		return akk(n-1, akk(n, m-1))

n=int(input("Input n="))
m=int(input("Input m="))
if n<0 or m<0:
	print("Incorrect value")
else:
	print(akk(n,m))
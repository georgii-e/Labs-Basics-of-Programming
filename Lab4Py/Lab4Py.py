x1=float(1)
x2=float(0.3)
tmp=float(x1)
xn=float()
n=int(input("Enter n\n"))
print("x1="+str(x1))
print("x2="+str(x2))
for i in range(3, n+1):
    xn = (i + 1) * tmp
    tmp = x2
    x2 = xn
    print("x"+str(i)+"="+str(xn))

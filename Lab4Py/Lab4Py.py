x1=float(1)
x2=float(0.3)
tmp=float(x1)
xn=float()
n=int(input("Enter n\n"))
if n<=0:
    print ("Incorrect n")
elif n==1:
    print("x1="+str(x1))
elif n==2:
    print("x2="+str(x2))
else:
    print("x1="+str(x1))
    print("x2="+str(x2))
    for i in range(3, n+1):
        xn = (i + 1) * tmp
        tmp = x2
        x2 = xn
        print("x"+str(i)+"="+str(xn))

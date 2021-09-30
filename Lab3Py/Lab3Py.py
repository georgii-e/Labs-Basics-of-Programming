import math
n=int(1)
a=float()
x=float (input("Input x\n"))
s=float()
while n<=11:
    a=float(x/(math.sqrt(n)*(n+2)))
    s+=a
    n+=1
    print ('a=',a)
else:
    while abs(a)>=0.0001:
        a=float(x/(math.sqrt(n)*(n+2)))
        s+=a
        n+=1
        print ('a=',a)
print ('s=',s)

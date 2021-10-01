import math
n=int(1)
a=float()
x=float (input("Input x\n"))
s=float()
while n<=11:
    a=float(x/(math.sqrt(n)*(n+2)))
    s+=a
    if x<=1:
        print ('a'+str(n)+'='+str(a))
    n+=1
else:
    while abs(a)>=0.0001:
        a=float(x/(math.sqrt(n)*(n+2)))
        s+=a
        if x<=1:
            print ('a'+str(n)+'='+str(a))
        n+=1
print ('Sum='+str(s))

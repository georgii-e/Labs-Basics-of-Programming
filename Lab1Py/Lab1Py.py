import math
q=float (input ('q='))
n=float (input ('n='))
b=float (input ('b='))
s=float (b*(1-math.pow(q,n))/(1-q))
print('Sum='+str(s))


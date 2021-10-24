def pal (n, part=0):
    if n==0:
        return (part)
    return pal(n//10, part*10+n%10)

eps=1000
for i in range (1, eps+1):
    if pal(i)==i:
        print(i)
phrase=(input("Write a phrase: "))
length=int(input("Input number: "))
lst=phrase.split()
newlst=lst.copy()
for i in range (len(lst)-1, -1, -1 ):
    if len(lst[i])<length:
        del newlst[i]
print(' '.join(newlst))
    

# Write Python 3 code in this online editor and run it.
a=[1,2,3,4,1,2,3,4]

for x in range(0,3):
    a[x]=a[x]*a[x]
    
for x in range(3,len(a)):
    if x%2==0:
        a[x]=pow(a[x],4)
    else:
        a[x]=pow(a[x],3)
        
print(a)

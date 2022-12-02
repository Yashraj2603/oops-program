if __name__ == '__main__':
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())
    
a=[]
b=[]
c=[]
newlist=[]
ans=[]
for i in range(0,x+1):
    a.append(i)

for i in range(0,y+1):
    b.append(i)
    

for j in range(0,z+1):
    c.append(j)
    
for i in range(len(a)):
    for j in range(len(b)):
        for k in range(len(c)):
            if(a[i]+b[j]+c[k]!=n):
                newlist.append(a[i])
                newlist.append(b[j])
                newlist.append(c[k])
                
x=[newlist[i:i+3]for i in range(0,len(newlist),3)]
print(x)

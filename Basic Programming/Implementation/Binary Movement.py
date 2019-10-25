n=int(input())
arr=[int(x) for x in input().split()]
h=[0]*n
q=int(input())
while q:
    l=[int(x) for x in input().split()]
    h[l[0]-1]+=1
    h[l[1]]-=1
    q-=1
for i in range(0,n-1):
    h[i+1]=h[i+1]+h[i]
total=0
for i in range(0,n):
    k=h[i]%2
    arr[i]=abs(arr[i]-k)
    if arr[i]:
        total+=1
print(total)
for i in range(0,n):
    print(arr[i],end=" ")

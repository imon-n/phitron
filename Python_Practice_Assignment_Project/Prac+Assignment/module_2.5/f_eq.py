sum=0
x=int(input())
n=int(input())
for i in range(2,n):
    if i%2==1:
        continue
    sum=sum+pow(x,i)
    
print(sum)
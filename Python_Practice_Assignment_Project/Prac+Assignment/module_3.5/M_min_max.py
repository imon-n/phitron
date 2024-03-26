n=int(input())
input_line = input()
arr = list(map(int,input_line.split()))

maxNumber = arr[0]
mn = arr[0]
n1=0
n2=0

for i in range(1,n):
    if arr[i]>maxNumber:
        maxNumber=arr[i]
        n1=i

    if arr[i]<mn:
        mn=arr[i]
        n2=i
    
arr[n1], arr[n2] = arr[n2], arr[n1]

for i in arr:
    print(i, end=" ")    
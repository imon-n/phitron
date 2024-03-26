#Problem_ 4 : Write Python program to solve Minimize Number
n = int(input())
arr = list(map(int,input().split()))

cnt = 0
while True:
    flage = True
    for i in range(0,n):
        if arr[i]%2==1:
            flage = False
            break
        else:
            arr[i]//=2
    if flage==True:
        cnt+=1
    else:
        break

print(cnt)


    

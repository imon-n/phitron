# n=int(input())
# a = [0] * (n + 1)
# a[0]=0
# a[1]=1
# for i in range(2,len(a)):
#     a[i]=a[i-1] + a[i-2]

# for i in range(n):
#      print(a[i],end=" ")


n=int(input())
dp = [-1] * (n + 1)
def fibo(n):
    if n==0:
        return 0
    if n==1:
        return 1
    if dp[n]!=-1:
        return dp[n]
    dp[n] = fibo(n-1) + fibo(n-2)
    return dp[n]


for i in range(n):
    dp[i]=-1

fibo(n)

for i in range(n):
    print(fibo(i),end=" ")


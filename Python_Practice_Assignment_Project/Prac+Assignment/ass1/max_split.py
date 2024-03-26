#Problem_ 1.Write Python program to solve Max Split		

s = input()
l = 0
r = 0
ans = ''
cnt = 0
for ch in s:
    if ch=='L':
        l+=1
    elif ch=='R':
        r+=1

    ans=ans+ch

    if l==r:
        cnt=cnt+1
        ans=''
print(cnt)

l = 0
r = 0
ans = ''
for ch in s:
    if ch=='L':
        l+=1
    elif ch=='R':
        r+=1

    ans=ans+ch

    if l==r:
        print(ans)
        ans=''



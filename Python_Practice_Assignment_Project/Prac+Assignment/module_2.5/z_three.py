user_input=input()
k,s=map(int,user_input.split())
cnt = 0

for i in range(k+1):
    for j in range(k+1):
        m = s - i - j
        if 0 <= m <= k:
            cnt += 1

print(cnt)
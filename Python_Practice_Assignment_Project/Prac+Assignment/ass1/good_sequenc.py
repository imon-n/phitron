#Problem_ 2.Write Python program to solve Good Sequence

n = int(input())
arr = list(map(int,input().split()))
dic_tionary = {}
for val in arr:
    if val in dic_tionary:
        dic_tionary[val] += 1
    else:
        dic_tionary[val] = 1

chnag = 0

for num, cnt in dic_tionary.items():
    if cnt > num:
        chnag += cnt - num
    elif cnt < num:
        chnag += cnt

print(chnag)



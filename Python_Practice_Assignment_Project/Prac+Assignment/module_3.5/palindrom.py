n = int(input())
input_line = input()
arr = list(map(int, input_line.split()))
f = 0
for i in range(n):
    j = n - 1 - i
    if arr[i] != arr[j]:
        f = 1
        break

if f == 0:
    print("YES")
else:
    print("NO")

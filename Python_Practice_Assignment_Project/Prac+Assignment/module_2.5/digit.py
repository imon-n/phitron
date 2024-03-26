test = int(input())
while test > 0:
    test -= 1
    n = int(input())
    vu = []
    if n==0:
        vu.append(0)
    elif n<0:
        continue
    else:
        while n>0:
            v=n%10
            vu.append(v)
            n//=10

    print(vu[0],end="")
    for i in range(1,len(vu)):
        print(" " + str(vu[i]),end="")
    print()



 
# 4
# 121
# 39
# 123456
# 1200





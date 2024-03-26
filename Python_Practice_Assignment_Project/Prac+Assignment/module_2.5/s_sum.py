test = int(input())
while test>0:
    test-=1
    # n = int(input())
    input_line = input()
    n,m = map(int,input_line.split())
    # m = int(input())
    minimum = min(n,m)
    maximum = max(n,m)
    sum = 0
    for i in range(minimum+1,maximum):
        if i%2==1:
            sum+=i
    print(sum)


# sample input : 
# 3
# 5 6
# 10 4
# 4 9  
# expected output :
# 0
# 21
# 12



# 3
# 5 6
# 10 4
# 4 9
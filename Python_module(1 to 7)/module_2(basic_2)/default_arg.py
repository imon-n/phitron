
# def sum(num1,num2):
# def sum(num1,num2,num3=3):
#     result = num1+num2
#     return result

# total = sum(99,11)
# print('total : ',total)


#arg arg arg arg arg arg arg arg arg arg arg arg

# def sum(h,*g):
#     print(h)
# sum(4,4,6,3,2)


def all_sum(n1,n2,*num):
    print(num)
    sum=0
    print(n1+n2+100)
    for val in num:
        sum+=val
    return sum


# all_sum(4,6,4,9,7)
t = all_sum(4,6,4,9,7)
print(t)





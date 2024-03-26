# lambda

def doubled(x):
    return x*2
result = doubled(44)
# print(result)


# double = lambda num : num*2
# sqr = lambda num : num**2
# result = double(44)
# result2 = sqr(9)
# print(result,result2)


add = lambda x,y : x+y
sum = add(4,12)
print(sum)


numbers = [12,3,5,3,2,11,24]
# double_nums = map(doubled,numbers)
doubled_nums = map(lambda x : x*2,numbers)
squal_nums = map(lambda x: x*x,numbers)
print(numbers)
print("double : ",list(doubled_nums))
print('squar : ' ,list(squal_nums))


actors = [
    {'name': 'sabana', 'age':65},
    {'name': 'sabnor', 'age':45},
    {'name': 'sakib', 'age':30},
    {'name': 'rakib', 'age':30},
    {'name': 'joni', 'age':75},
    {'name': 'masud', 'age' : 50}
]


junior = filter(lambda actors : actors['age']<40 , actors)

print(list(junior))
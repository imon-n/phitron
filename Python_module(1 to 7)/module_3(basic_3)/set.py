# list[] -----> []
# tuple ------> ()
# set  -------> {}
# set : union same collection (duplicate)
# set : union same collection (duplicate) and index not maintain


numbers = {12,3,5,3,11,24}

# numbers = [12,3,5,3,2,11,24]
print(numbers)
print(type(numbers))
numbers_set = set(numbers)
print(numbers_set)

numbers.add(44777777744)
# numbers[1]=666 # it is not possible ,,because index not maintain
numbers.remove(11)

# for 12 in numbers:
#     print('9 exists')
# print(numbers)



a = {1,3,5,7}
b = {1,2,3,4,5}
print(a&b)
print(a|b)

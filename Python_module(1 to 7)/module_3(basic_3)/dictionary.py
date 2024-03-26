person ={'name':'rana',"age":23, 'address':'china','student':True}
print(person)
print(person["address"])
print(person.keys())
print(person.values())
person['language'] = 'python' #add
person['name'] = 'karim'      #initialize
del person['student']         # delete
print(person)

for key,value in person.items():
    print(key,value)


# numbers = [12,3,5,3,2,11,24]
# for indx , num in enumerate(numbers):
#     print(indx,num)
# def full_name(first,last):
#     name = f'{first} {last}'   
#     return name

# # nam= full_name(first='hf',last='hd')
# nam= full_name('cchf','hd')
# print(nam)


# def famous(first,last,title,addition):
#     name = f'{addition} {title} {first} {last}'
#     return name

# name = famous(last='taheri',addition='giyas' , first='uddin', title='att')
# print(name)


# def famous(first,last,**addition):
#     name = f'{first} {last}'
#     for key, valu in addition.items():
#         print(key,valu)

#     return name

# name = famous(last='taheri',addition='----giyas' , first='uddin', title='----att',yy='----r',iuu='----h')
# print(name)




def cal(n1,n2):
    sum=n1+n2
    mul=n1*n2
    div=n1//n2
    sub=n1-n2
    return div,sub

print(cal(77,11))

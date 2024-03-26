def multiple():
    return 3,9
# print(multiple())
print(type(multiple))
things = 'pen','pet','water','pond','phone','web cam','sunglass'
print(things[2])
print(things[-3])
print(things[2:5])

if 'pond' in things:
    print('exists')

for items in things:
    print(items,end=" ")
    print()

# things[0]='hfg'  # it is not possible to chnage



mega=[[2,68,4],[4,4,5]]
print(mega)
print(mega[0])
mega[0][1]=9999999 # it is possible
mega[0]=9999999 # it is possible

print(mega)

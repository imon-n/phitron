### .csv(coma separated value)
### .txt (text file)

with open('message.txt','w') as file:
    file.write('BANGLADESH ::::')

# with open('message.txt','a') as file:
#     file.write(' i love you,Python')


with open('message.txt','r') as file:
    text = file.read()
    print(text)


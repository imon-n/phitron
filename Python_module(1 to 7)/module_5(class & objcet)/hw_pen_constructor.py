class Pen:
    manufactured = 'plastick'
    def __init__(self,color,weight,company):
        self.color = color
        self.weight = weight
        self.company = company

y = Pen('red','5g','matador')
print(y.color , y.company , y.weight)
print(y.manufactured)
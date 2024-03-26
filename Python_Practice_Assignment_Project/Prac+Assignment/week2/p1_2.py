class Product:
    def __init__(self,name,price):
        self.name = name
        self.price = price

class Shop:
    def __init__(self):
        self.productss = []

    def add_product(self,duct):
        if isinstance(duct,Product):
            self.productss.append(duct)
            print(f'{duct.name} has been added')
        else:
            print('invalid product')



pro1 = Product('pc',5555)
pro2 = Product('smartphone',4444)

my_shop = Shop()
my_shop.add_product(pro1)
my_shop.add_product(pro2)

print('product in the shop')

for uu in my_shop.productss:
    print(f'L{uu.name} - tk{uu.price}')
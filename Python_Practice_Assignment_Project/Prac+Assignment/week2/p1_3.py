# 3.Inside the Shop class, create a method name buy_product which is used to buy a product and 
# check whether this product is available or not. If you successfully buy a product, then throw a Congress message.

class Shop:
    def __init__(self):
        self.products = []

    def add_product(self,jinis):
        self.products.append(jinis)

    def buy_product(self,jin):
        for bb in self.products:
            if bb == jin:
                print('*** congress ***')
                print(f'{jin} product is available , you can buy')
                break
            else:
                print(f'Sorry , {jin} is unavailable ')
                break

pro1 = Shop()

pro1.add_product('laptop')
pro1.add_product('pc')

pro1.buy_product('lapto')
class Shop:
    cart = []   #cart is a class attribute
    def __init__(self,buyer):
        self.buyer = buyer
    def add_to_card(self,item):
        self.cart.append(item)

mizan = Shop('meeeeezan')
mizan.add_to_card('shoes')
mizan.add_to_card('phone')
print(mizan.cart)

niso = Shop('afran')
niso.add_to_card('cap')
niso.add_to_card('watch')
print(niso.cart)



##*** cart is instance attribute *****

# class Shop:
#     shopping_mall = 'jamuna'
#     def __init__(self,buyer):
#         self.buyer = buyer
#         self.cart = []   #cart is instance attribute

#     def add_to_card(self,item):
#         self.cart.append(item)

# mizan = Shop('meeeeezan')
# mizan.add_to_card('shoes')
# mizan.add_to_card('phone')
# print(mizan.cart)

# niso = Shop('afran')
# niso.add_to_card('cap')
# niso.add_to_card('watch')
# print(niso.cart)
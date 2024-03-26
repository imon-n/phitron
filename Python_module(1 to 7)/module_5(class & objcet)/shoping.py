class Shopping:
    def __init__(self, name):
        self.name = name
        self.cart = []
        self.money = 5000

    def add_to_cart(self, item, price, quantity):
        product = {'item': item, 'price': price, 'quantity': quantity}
        self.cart.append(product)

    # def remove_item(self, item):
    #     for product in self.cart:
    #         if product['item'] == item:
    #             self.cart.remove(product)
    #             break

    def checkout(self, amount):
        total = 0
        for product in self.cart:
            total += product['price'] * product['quantity']
        print(total)

        if amount < total:
            print(f'You have to provide {total - amount} more.')
        else:
            extra = amount - total
            print(f'Here are your items, and your extra money: {extra}')

swapan = Shopping('Myself Alen Sopno')
swapan.add_to_cart('alu', 50, 6)
swapan.add_to_cart('dim', 12, 24)
# swapan.remove_item('dim')
swapan.checkout(1600)

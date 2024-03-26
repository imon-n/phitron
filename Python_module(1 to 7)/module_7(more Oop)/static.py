class Shopping:
    cart = []  #class attribute #static attribute
    origin = 'cina'

    def __init__(self, name, location):
        self.name = name
        self.location = location

    
    def purchase(self,item,price,amount):
        remaining = amount - price
        print(f'buying: {item} for price: {price} and remaining: {remaining}')

    @classmethod
    def hudai_dekhi(self,item):
        print(self.origin)
        print('hudai dekhi kintu kinmu just ac er hawa khaite aschi', item)

    @staticmethod
    def multiply(a,b):
        print(a*b)


basundara = Shopping('basundara', 'not popular location')
# basundara.purchase('lungi', 500, 10000)
# basundara.purchase('99', 999, 99999)

## Shopping.purchase(4,444,44444)   ## (classmeyhode use kore ababe access ney jay,,,,)

# ##------>>purchase(self, ,  ,  ),,,,eta jodi class methode hoto tahole ,,ebabe accsess neya jaito




## class method
Shopping.hudai_dekhi('------Lungi------')

#static method
Shopping.multiply(4,6) 

## basundara.multiply(6,9)  

# #===== ebabe hbe na,,, karon staticmethode+classmethod er somoy object(basundara) teke access neye jay na,,,class(Shopping) teke accsess neya lage

#********** (classmethod vs staticmethod ,,,, ei duitar modde differnec hocce::: class methode e 'self' use kora hoy but statick methode e 'self' use kora hoy na,,,,,,, tacahara classmethod and staticmethod,,,,same babe access neya jay)
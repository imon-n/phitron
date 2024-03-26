balance = 30000
def buy_thing(item,price):
    global balance 
    
    # balance=3
    print(balance)
    balance=balance - price
    print(balance)

buy_thing('hj',1000)
class Phone:
    manufactured = 'china'

    def __init__(self, owner, brand, price):
        self.owner = owner
        self.brand = brand
        self.price = price

    def send_sms(self,others_phone,sms):
        text = f'sendening sms to :{others_phone} and message {sms}'
        print(text)

my_phone = Phone('imon','oppo',700000)
print(my_phone.owner , my_phone.brand , my_phone.price)

her_phone = Phone('rana','vivo',60000)
print(her_phone.brand,her_phone.owner,her_phone.price)

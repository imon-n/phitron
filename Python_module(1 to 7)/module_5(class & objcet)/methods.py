def call():
    print('calling someone i dont how')
    return 'calling done'


class phone:
    price = 67,000
    color = 'black'
    brand = 'oppo'
    features = ['camera','speker','hammer']

    def call(self):
        print('calling one person')

    def send_sms(self,phone,sms):
        text = f'sendening sms to :{phone} and message {sms}'
        return text
        
my_phone = phone()
print(my_phone.features)
my_phone.call()
my_phone.send_sms(4552,'i forgot')

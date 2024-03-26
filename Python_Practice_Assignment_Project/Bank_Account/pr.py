class Account:
    accounts = []
    def __init__(self,name,accNumber,password):
        self.name = name
        self.accNumber = accNumber
        self.password = password

        Account.accounts.append(self)

    def chnageInfo(self,name):
        self.name = name
        print(f'After chnaging name {self.name}')

    def chnageInfo(self,name,password):
        self.name = name
        self.password = password
        print(f'After chnaging name {self.name} and password {self.password}')

class SavingsAccount(Account):
    def __init__(self,name,accNumber, password):
        super().__init__(name,accNumber,password)

currentUser = SavingsAccount('imon',29,29)

print(f'\nWelcome {currentUser.name}\n')
new_name = input('Change name: ')
new_password = input('Change password (press enter to keep the existing password): ')
currentUser.chnageInfo(new_name)

from abc import ABC, abstractmethod

class Account(ABC):
    accounts = []

    def __init__(self,name,accNumber,password,type):
        self.name = name
        self.accNumber = accNumber
        self.password = password
        self.type = type

        self.balance = 0

        Account.accounts.append(self)

    def deposit(self,amount):
        if amount >=0:
            self.balance += amount
        else:
            print('\n Invalid amount \n')
    
    def withdraw(self,amount):
        if amount >= 0 and amount <= self.balance:
            self.balance -= amount
        else:
            print('\n Invalid amount \n')

    def chnageInfo(self,name):
        self.name = name
        print(f'After chnaging name {self.name}')

    # Over loadading of methode chnage info

    def chnageInfo(self,name,password):
        self.name = name
        self.password = password
        print(f'After chnaging name {self.name} and password {self.password}')

    @abstractmethod
    def showInfo(self):
        pass

class SavingsAccount(Account):
    def __init__(self,name,accNumber, password,interest_rate):
        super().__init__(name,accNumber,password,'savings')
        self.interest_rate = interest_rate

    def showInfo(self):
        print(f'\n Info of {self.name}\n')
        print(f'\n account type {self.type}\n')
        print(f'\n Account Number {self.accNumber}\n')
        print(f'\n Balance {self.balance}')

    def applyInterst(self):
        interest = self.balance * (self.interest_rate / 100)
        print(f'\n Applied interest rate {interest}')
        self.deposit(interest)


class SpecilAccount(Account):
    def __init__(self,name,accNumber, password,limit):
        super().__init__(name,accNumber,password,'special')
        self.limit = limit

    # Over loadading of methode withdraw
    
    def withdraw(self, amount):
        if amount >= 0 and amount <= self.limit:
            self.balance -= amount
        else:
            print('\n Invalid amount \n')

    def showInfo(self):
        print(f'\n Info of {self.type} account {self.name}\n')
        print(f'\n Account Number {self.accNumber}\n')
        print(f'\n Balance {self.balance}')


currentUser = None

while(True):
    if currentUser == None:
        print('\n No user logged in !\n')

        ch = input('\n login or Register? (L/R) : ')
        if ch == 'R':
            name = input('Enter your name : ')
            accNum = int(input('Enter your account number : '))
            pa = input('Enter your password : ')
            a = input('Savings or Specail ? (sv/sp) : ')
            if a == 'sv':
                inter_Rate = int(input("Interest Rate : "))
                currentUser = SavingsAccount(name,accNum,pa,inter_Rate)
            elif a == 'sp':
                limi = int(input("Overdraf limit : "))
                currentUser = SpecilAccount(name,accNum,pa,limi)

            else:
                print('Invalid choice')

        else:
            num = int(input("Account Number:"))
            for account in Account.accounts:
                if num == account.accNumber:
                    currentUser = account
                    break

    else:
        print(f'\n welcome {currentUser.name} \n')
        if currentUser.type == 'savings':
            print("1. Withdraw")
            print("2. Deposit")
            print("3. Show Info")
            print("4. change Info")
            print("5. Apply Interset")
            print("6. Logout\n")

            op = int(input('chose your options : '))
            if op == 1:
                amount=int(input("Enter withdraw amount : "))
                currentUser.withdraw(amount)

            elif op==2:
                amount=int(input("Enter deposit amount : "))
                currentUser.deposit(amount)
            
            elif op==3:
                currentUser.showInfo()

            elif op==4:
                new_name = input('Change name: ')
                new_password = input('Change password : ')
                currentUser.chnageInfo(new_name,new_password)

            elif op==5:
                currentUser.applyInterst()

            elif op==6:
                break
            
            else:
                print('invalid options')

        else:
            print("1. Withdraw")
            print("2. Deposit")
            print("3. Show Info")
            print("4. change Info")
            print("5. Logout\n")
            
            
            op=int(input("Chhose Option : "))
            
            if op==1:
                amount=int(input("Enter withdraw amount : "))
                currentUser.withdraw(amount)
                
            elif op==2:
                amount=int(input("Enter deposit amount : "))
                currentUser.deposit(amount)
            
            elif op==3:
                currentUser.showInfo()
            
            elif op==4:
                new_name = input('Change name: ')
                new_password = input('Change password : ')
                currentUser.chnageInfo(new_name,new_password)
            
            elif op==5:
                currentUser=None
            
            else:
                print("Invalid Option")
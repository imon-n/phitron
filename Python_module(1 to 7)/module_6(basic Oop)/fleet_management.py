class Company:
    def __init__(self,name,adress) ->None:
        self.name = name
        self.address = adress
        self.bus = []
        self.drivers = []
        self.routes = []
        self.counter = []
        self.fare = []
        self.manager = []
        self.supervisors = []

class Driver:
    def __init__(self,name,license,age):
        self.name = name
        self.license = license
        self.age = age

class Counter:
    def __init__(self):
        pass
    def purchase_a_ticket(self,start,destination):
        pass

class Passenger:
    pass

class Supervisor:
    pass


imon = Driver('IMON','YES',34)
print(imon.age)

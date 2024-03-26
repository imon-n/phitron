class Engine:
    def __init__(self):
        pass

    def start(self):
        return 'engine started'

class Driver:
    def __init__(self):
        pass

# car "has a" engie diver

class Car:
    def __init__(self):
        self.engine = Engine()
        self.diver = Driver()

    def start(self):
        return self.engine.start()

compo = Car()
print(compo.start())
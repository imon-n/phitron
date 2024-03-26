class Person:
    def __init__(self, name, age, height, weight):
        self.name = name
        self.age = age 
        self.height = height
        self.weight = weight
    
    def eat(self):
        print('vat mangso pulau')

    def exercise(self):
        raise NotImplementedError

    
class Cricketer(Person):
    def __init__(self, name, age, height, weight, team):
        self.team = team
        super().__init__(name, age, height, weight)
    
    def eat(self):
        print('vagitable')   # override  # override # override # override

    def exercise(self):
        print('gym e jauya valo if possible') # override # override


    # + sign operator overload
    def __add__(self,other):
        return self.age + other.age

    # * sign operator overload
    def __mul__(self, other):
        return self.weight * other.weight    

    def __gt__(self,other):
        return self.age > other.age

    def __len__(self):
        return self.height


sakib = Cricketer('sakib', 38, 68, 91, 'BD')
mushi = Cricketer('mushi', 36, 65, 78, 'BD')

#------override------#------override------
# sakib.eat()             
# mushi.exercise()        


##---------overload---------#overload--------- #overload
# print(45 + 63)
# print( 'Sakib'+ ' ' + 'Rakib')
# print([12, 98] + [5,6,7,1,2])
# print(sakib + mushi)
print(sakib * mushi)
# print(len(sakib))
print(sakib < mushi)
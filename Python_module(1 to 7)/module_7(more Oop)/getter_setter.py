class User:
    def __init__(self, name, age, money):
        self._name = name
        self._age = age
        self.__money = money

    # getter without any setter is readonly attribute
    @property
    def age(self):
        return self._age
    
    # getter 
    @property
    def salary(self):
        return self.__money

    # # setter
    @salary.setter
    def salary(self,value):
        if value < 0:
            return 'salary can not be negative'
        self.__money += value

        return self.__money

samsu = User('kopa', 34, 12000)

print(samsu.age)
print(samsu.salary)

print(User.salary)
print(User.age)

samsu.salary = 8000
print(samsu.salary)
# 1.	Make a class named Star_Cinema which will have one class attribute named hall_list which is an empty list initially. 
#   Make a method named entry_hall() to insert an object of class Hall (Described below) inside its hall_list. 

class Hall:
    def __init__(self, name):
        self.name = name

class Star_Cinema:
    def __init__(self):
        self.hall_list = []

    def entry_hall(self, hall_name):
        hall_obj = Hall(hall_name)
        self.hall_list.append(hall_obj)

movie = Star_Cinema()

movie.entry_hall('Dhaka_hall')
movie.entry_hall('ctg_hall')

for hall in movie.hall_list:
    print(hall.name)


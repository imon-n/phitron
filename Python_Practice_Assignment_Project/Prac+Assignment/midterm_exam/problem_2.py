# Make a class named Hall which will have 5 instance attributes given below	
# seats which is an dictionary of seats information
# show_list which is an list of tuples
# rows which is the row of the seats in that hall
# cols which is the column of the seats in that hall
# hall_no which is the unique no. of that hall
# Initialize an object of class Hall with rows, cols and hall_no. 
# And insert that object to the Star_Cinema class attribute named hall_list inside 
# the initializer using inheritance. seats and show_list will be empty initially.


class Star_Cinema:
    def __init__(self):
        self.hall_list = []

    def entry_hall(self, hall_obj):
        self.hall_list.append(hall_obj)

class Hall(Star_Cinema):
    def __init__(self, rows, cols, hall_no):
        self.rows = rows
        self.cols = cols
        self.hall_no = hall_no
        self.seats = {}
        self.show_list = []

    def add_person_to_hall(self, person):
        self.show_list.append(person)

movie = Star_Cinema()

hall1 = Hall(10, 8, 1)
hall2 = Hall(12, 10, 2)

hall1.add_person_to_hall("John")
hall1.add_person_to_hall("Alice")

movie.entry_hall('Dhaka Hall')
movie.entry_hall('Ctg Hall')

for hall in movie.hall_list:
    print(hall)

for per in hall1.show_list:
    print(per)
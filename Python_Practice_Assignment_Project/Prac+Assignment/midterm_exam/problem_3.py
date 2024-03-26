# 3.	Make a method in Hall class named entry_show() which will take id, movie_name and time in string format. Make a tuple with all of the information and append it to the show_list attribute. Allocate seats with rows and cols using 2d list, initially all seats will be free. Make a key with id to the attribute seats and value will be the 2d list.

class Hall:
    def __init__(self, row, col, hall_no):
        self.seats = {}  
        self.list_show = []  
        self.row = row
        self.col = col
        self.hall_no = hall_no

    def entry_show(self, id, movie_name, time):
        info = (id, movie_name, time)
        self.list_show.append(info)
        seat = []
        for i in range(self.row):
            seat.append(['0'] * self.col)
        self.seats[id] = seat

        # for i in range(3):
        #     seat.append(['0','0','0','0'])
        # self.seats[id] = seat

hall = Hall(3, 4, 1)

hall.entry_show(1, 'Priyotama', '3:00 PM')

for i in hall.seats[1]:
    for j in i:
        print(j,end=' ')
    print()




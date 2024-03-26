# 6 . Make a method in Hall class named view_available_seats() which will take an id of show, and view the 
# seats that are available in that show

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

    def book_seats(self,id):
        row = int(input("Enter row : "))
        col = int(input("Enter coloumn : "))            
        self.seats[id][row][col] = '1'
        print("---------Booked successfully.------------")

##---------- view_available_seats(id) -----------###
    def view_available_seats(self,id):
        for i in self.seats[id]:
            for j in i:
                print(j,end=' ')
            print()
##----------- view_available_seats(id) -----------###


def view_show_list(self):
    for show in self.list_show:
        print(f"Show ID: {show[0]}, Movie: {show[1]}, Time: {show[2]}")




hall = Hall(3, 4, 1)
hall.entry_show(1, 'Priyotama', '3:00 PM')
hall.entry_show(2, 'DUM 3', '12:00 PM')

hall.view_available_seats(1)   #### view_available_seats(id)
id = int(input("Enter the show ID: "))
hall.book_seats(id)
hall.view_available_seats(1)   #### view_available_seats(id)

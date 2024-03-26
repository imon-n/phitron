# 4.Make a method in Hall class named book_seats() which will take an id of the show and list of tuples where every tuple contains the row and col of the seat. You need to check the id of the show, and book the seats. 

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


hall = Hall(3, 4, 1)

hall.entry_show(1, 'Priyotama', '3:00 PM')

id = int(input("Enter the show ID: "))
hall.book_seats(id)





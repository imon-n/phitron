# 5.	Make a method in Hall class named view_show_list() which will view all the shows running,,,,,

class Hall:
    def __init__(self, row, col, hall_no):
        self.seats = {}  
        self.list_show = []  
        self.row = row
        self.col = col
        self.hall_no = hall_no

    def view_show_list(self):
        for show in self.list_show:
            print(f"Show ID: {show[0]}, Movie: {show[1]}, Time: {show[2]}")

    def entry_show(self, id, movie_name, time):
        info = (id, movie_name, time)
        self.list_show.append(info)
        seat = []
        for i in range(self.row):
            seat.append(['0'] * self.col)
        self.seats[id] = seat


hall = Hall(3, 4, 1)

hall.entry_show(1, 'Priyotama', '3:00 PM')
hall.entry_show(2, 'DUM 3', '12:00 PM')

hall.view_show_list()

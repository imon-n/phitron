# 9. Make the information of the classes as
#  protected/private as you can so that the 
# attributes can’t be accessed outside the class.

class Hall:
    def __init__(self, row, col, hall_no):
        self._seats = {}  # Protected attribute
        self._list_show = []  # Protected attribute
        self._row = row  # Protected attribute
        self._col = col  # Protected attribute
        self._hall_no = hall_no  # Protected attribute

    def _entry_show(self, id, movie_name, time):
        info = (id, movie_name, time)
        self._list_show.append(info)
        seat = []
        for i in range(self._row):
            seat.append(['0'] * self._col)
        self._seats[id] = seat

    def book_seats(self,id):
        if id not in self._seats:
            print('Wrong movie ID .')
            return

        row = int(input("Enter row : "))
        col = int(input("Enter coloumn : "))

        if row < 0 or row >= self.row or col < 0 or col >= self.col:
            print("---------Invalid row or column.----------")
            return
            
        if self._seats[id][row][col] == '1':
            print("--------This seat is already booked.------")
        else:
            self._seats[id][row][col] = '1'
            print("---------Booked successfully.------------")

    def view_available_seats(self,id):
        for i in self._seats[id]:
            for j in i:
                print(j,end=' ')
            print()

    def view_show_list(self):
        for show in self._list_show:
            print(f"Show ID: {show[0]}, Movie: {show[1]}, Time: {show[2]}")




hall = Hall(3, 4, 1)
hall._entry_show(1, 'Priyotama', '3:00 PM')
hall._entry_show(2, 'DUM_Three', '12:00 PM')

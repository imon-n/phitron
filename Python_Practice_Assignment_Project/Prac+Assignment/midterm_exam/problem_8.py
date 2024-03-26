# If someone gives a wrong id of a show
# If someone tries to book a seat that is invalid
# If someone tries to book a seat that is already booked

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
        if id not in self.seats:
            print('Wrong movie ID .')
            return

        row = int(input("Enter row : "))
        col = int(input("Enter coloumn : "))

        if row < 0 or row >= self.row or col < 0 or col >= self.col:
            print("---------Invalid row or column.----------")
            return
            
        if self.seats[id][row][col] == '1':
            print("--------This seat is already booked.------")
        else:
            self.seats[id][row][col] = '1'
            print("---------Booked successfully.------------")

    def view_available_seats(self,id):
        for i in self.seats[id]:
            for j in i:
                print(j,end=' ')
            print()

    def view_show_list(self):
        for show in self.list_show:
            print(f"Show ID: {show[0]}, Movie: {show[1]}, Time: {show[2]}")




hall = Hall(3, 4, 1)
hall.entry_show(1, 'Priyotama', '3:00 PM')
hall.entry_show(2, 'DUM_Three', '12:00 PM')


while True:
    print("---chose option----")
    print("1. Book a seat")
    print("2. View available seats")
    print("3. Show available Movie")
    print("4. Quit")

    choice = input("Enter your choice: ")
    
    if choice == '1':
        id = int(input("Enter the show ID: "))
        hall.book_seats(id)

    elif choice == '2':
        id = int(input("Enter the show ID: "))
        hall.view_available_seats(id)

    elif choice == '3':
        hall.view_show_list()

    elif choice == '4':
        break
    else:
        print("Invalid choice. Please try again.")


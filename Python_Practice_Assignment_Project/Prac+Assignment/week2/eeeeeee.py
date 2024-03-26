# class SeatManager:
#     def __init__(self):
#         # Initialize an empty dictionary to store available seats for each ID
#         self.seats = {}

#     def show_available_seats(self, id):
#         if id in self.seats:
#             for row in self.seats[id]:
#                 for seat in row:
#                     print(seat, end=' ')
#                 print()
#         else:
#             print(f"No available seats for ID {id}")

#     def reserve_seat(self, id, row, seat_number):
#         if id in self.seats:
#             if row < 1 or seat_number < 1:
#                 print("Invalid row or seat number.")
#             elif row <= len(self.seats[id]) and seat_number <= len(self.seats[id][row - 1]):
#                 if self.seats[id][row - 1][seat_number - 1] == 0:
#                     self.seats[id][row - 1][seat_number - 1] = 1
#                     print(f"Seat {row}-{seat_number} reserved for ID {id}")
#                 else:
#                     print(f"Seat {row}-{seat_number} is already reserved.")
#             else:
#                 print(f"Seat {row}-{seat_number} does not exist.")
#         else:
#             print(f"ID {id} does not exist.")

#     def add_new_id(self, id, num_rows, num_seats_per_row):
#         if id not in self.seats:
#             rows = [[0] * num_seats_per_row for _ in range(num_rows)]
#             self.seats[id] = rows
#             print(f"ID {id} added with {num_rows} rows and {num_seats_per_row} seats per row.")

# # Example usage:
# seat_manager = SeatManager()
# seat_manager.add_new_id(1, 3, 5)
# seat_manager.show_available_seats(1)
# seat_manager.reserve_seat(1, 1, 2)
# seat_manager.reserve_seat(1, 1, 2)  # Trying to reserve the same seat again
# seat_manager.show_available_seats(1)









Dict = {
    'Dict1': {'name': 'Ali', 'age': '19'},
    'Dict2': {'name': 'Bob', 'age': '25'}
}

# for inner_dict in Dict.items():
#     for value in inner_dict.items():
#         print(value, end=' ')
#     print()

for id, inner_dict in Dict.items():
    for key, value in inner_dict.items():
        print(value, end=' ')
    print()

from abc import ABC, abstractmethod
class Ride_Sharing:
    def __init__(self, company_name):
        self. company_name = company_name
        self. riders = []
        self. drivers = []

    def add_riders(self, rider):
        self.riders.append(rider)

    def add_drivers(self, driver):
        self.drivers.append(driver)

    def __repr__(self):
        return f'{self.company_name} with riders: {len(self.riders)} and drivers: {len(self.drivers)}'


class User(ABC):
    def __init__(self, name, email, nid):
        self.name = name
        self.email = email
        self.nid = nid

    @abstractmethod
    def display_profile(self):
        raise NotImplementedError


class Driver(User):
    def __init__(self, name, email, nid, current_location):
        super().__init__(name, email, nid)
        self.current_location = current_location

    def display_profile(self):
        print(f'Driver name is : {self.name} and email is : {self.email}')


class Rider(User):
    def __init__(self, name, email, nid, current_location):
        super().__init__(name, email, nid)
        self.current_ride = None
        self.current_location = current_location

    def display_profile(self):
        print(f'Rider name is : {self.name} and email is : {self.email}')

    def ride_request(self, uber, destination):
        if not self.current_ride:
            ob = Ride_Matching(uber.drivers)
            result = ob.has_driver(self, destination)
            print("Your Result is," ,result)
            self.current_ride = result
            return True
        else:
            return False


class Ride_Matching:
    def __init__(self, drivers):
        self.drivers = drivers

    def has_driver(self, rider, destination):
        if len(self.drivers) > 0:
            ride = Ride(rider.current_location, destination)
            return ride
        else:
            return 'Sorry, Driver Not Found!'



class Ride:
    def __init__(self, start_location, end_location):
        self.start_location = start_location
        self.end_location = end_location
    #     self.driver = None
    #     self.rider = None

    # def start_rider(self):
    #     pass
    # def end_ride(self):
    #     pass
    def __repr__(self):
        return f'{self.start_location} to {self.end_location}'



uber = Ride_Sharing('Uber')

alice = Driver('Alice', 'alic@gmail.com', 12345, 'chittagong 1')
sakib = Rider('Sakib', 'sakib@gmail.com', 1236, 'chittagong 2')

uber.add_drivers(alice)
uber.add_riders(sakib)

sakib.ride_request(uber,'Dhaka')

# if sakib.ride_request(uber,"Dhaka"):
#     print("Travelling..")
# else:
#     print("No ride found")
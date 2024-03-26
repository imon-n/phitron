class Laptop:
    def __init__(self,brand,color,price,memory):
        self.brand = brand
        self.color = color
        self.price = price
        self.memory = memory

    def run(self):
        return f'running laptop: {self.brand}'

    def coding(self):
        return f'you can practice coding'

class phone:
    def __init__(self,brand,color,price,dual_sim):
        self.brand = brand
        self.price = price
        self.color = color
        self.dual_sim = dual_sim

    def __init__run(self):
        return f'phone is always stay on mood'

    def __init__(self,number,text):
        return f'sending sms to:{self.number} with: {text}'

class Camera:
    def __init__(self, brand, price, color, pixel) -> None:
        self.brand = brand
        self.price = price
        self.color = color
        self.pixel = pixel

    def run(self):
        pass

    def change_lens(self):
        pass
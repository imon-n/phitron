import math
import time
def timettt(func):
    def inner(*args, **kwargs):   ##  def inner(n):
    
        print('time started')
        func(*args, **kwargs)      ## func(n)

        print('time ended')

    return inner

# timer()()

@timettt
def get_factorial(n):
    print('factorial starting')
    result = math.factorial(n)
    print(f'factorial of {n} is: {result}')

get_factorial(n=5)

# function is the first class object

def double_decker():
    print('starting the double decker')
    def inner_fun():
        print('inside the inner')
        return 3000
    return inner_fun

# print('----------',double_decker(),'*********')
# print(double_decker()())


def do_something(work):
    print('work started')
    # print(work)
    work()
    print('work is ended')

# do_something(2)
# do_something('hhhhhhhhhh')

def coding():
    print('sleeping and dreaming in python')

# do_something(coding)

def sleeping():
    print('sleeping and dreaming in python')

do_something(sleeping)
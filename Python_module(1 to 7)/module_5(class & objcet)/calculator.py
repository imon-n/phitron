class calculator:
    brand = 'casio'
    def add(self,n1,n2):
        return n1+n2
    def sub(self,n1,n2):
        return abs(n1-n2)
    def mult(self,n1,n2):
        return n1*n2
    def div(self,n1,n2):
        return n1//n2

cal_tor = calculator()
print(cal_tor.add(6,4))
print(cal_tor.mult(6,4))
print(cal_tor.sub(6,4))
print(cal_tor.div(6,4))
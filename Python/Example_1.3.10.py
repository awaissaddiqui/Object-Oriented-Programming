class Complex:
    def __init__(self,r=0,i=0):
        self.re=r
        self.im=i

    def set_value(self,rr,ii):
        self.re=rr
        self.im=ii
    
    def show(self):
        print(f"Complex number :{self.re} + {self.im}i")

obj1=Complex(1,2)
obj1.show()

obj2=Complex(0,0)
obj2.set_value(2,5)
obj2.show()
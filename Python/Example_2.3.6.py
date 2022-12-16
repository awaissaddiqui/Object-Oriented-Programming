class Complex:
    def __init__(self,r=0,i=0):
        self.re=r
        self.im=i
    
    def addCom(self,num1,num2):
        self.re=num1.re+num2.re
        self.im=num1.im+num2.im
    
    def negate(self):
        self.re=-self.re
        self.im=-self.im
        return self

    def show(self):
        if self.im>0:
            print(f"{self.re} + {self.im}i")
        else:
            print(f"{self.re} {self.im}i")

c1=Complex(3,2)
print("First Complex Number")
c1.show()

c2=Complex(5,3)
print("Second Complex Number ")
c2.show()

c3=Complex(6,4)
print("Sum of two Complex Number ")
c3.addCom(c1,c2)
c3.show()

cy=c1.negate()
print("Negation of  Complex Number ")
cy.show()
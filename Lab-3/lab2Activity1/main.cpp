#include <iostream>

using namespace std;

class Complex{
  private:
        double re,im;
 public:
        Complex():re(0),im(0){
        }
        Complex(double  , double );
        void inputData();
        void displayData();
        void subCom(Complex , Complex);
        void mulCom(Complex , Complex);
};
        Complex::Complex(double r , double i):re(r),im(i){
        }
        void Complex::inputData(){
        cout<<"Enter real number :"; cin>>re;
        cout<<"Enter Imagnary number :"; cin>>im;
        }
        void Complex::subCom(Complex c1 , Complex c2){
          re = c2.re - c1.re;
          im = c2.im - c1.im;
        }
        void Complex::mulCom(Complex c1 , Complex c2){
        re = c1.re*c2.re-c1.im*c2.im;
        im = c1.re*c2.im+c1.im*c2.re;
        }
        void Complex::displayData(){
                 cout<<re<<"+"<<im<<"i"<<endl;}

int main(){
    Complex c1(4,5);
    cout<<"Value stored in c1 "<<endl;
    c1.displayData();
    Complex c2;
    c2.inputData();
    cout<<"Value stored in c2 "<<endl;
    c2.displayData();
    Complex c3;
    c3.subCom(c1,c2);
    cout<<"The difference of c1 and c2 = " ;
    c3.displayData();
    Complex c4;
    c4.mulCom(c1,c2);
    cout<<"The multiplication of c1 and c2 = " ;
    c4.displayData();
    return 0;
}

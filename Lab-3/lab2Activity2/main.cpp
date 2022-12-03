#include <iostream>

using namespace std;

class Complex{
private:
    double re, im;
public:
    Complex():re(0),im(0){
    }
    Complex(double  , double );
    Complex addCom(Complex);
    Complex subCom(Complex);
    Complex mulComplex(Complex);
    void showData();
};
 Complex::Complex(double r , double i){
        re = r;
        im = i;
}
Complex Complex::addCom(Complex c1){
    Complex temp;
    temp.re = re + c1.re;
    temp.im = im + c1.im;
    return temp;
}
Complex Complex::subCom(Complex c2){
    Complex temp1;
    temp1.re = re - c2.re;
    temp1.im = im - c2.im;
    return temp1;
}
Complex Complex::mulComplex(Complex c3){
    Complex temp2;
    temp2.re =re*c3.re-im*c3.im;
    temp2.im = im*c3.re+re*c3.im;
    return temp2;
}
void Complex::showData(){
        cout<<re<<"+"<<im<<"i"<<endl;
}
int main(){
    Complex c1(5,8);
    cout<<"c1 = ";
    c1.showData();
    Complex c2(2,3);
    cout<<"c2 = ";
    c2.showData();
    Complex c3;
    c3 = c1.addCom(c2);
    cout<<"Addition of c1 and c2 = ";
    c3.showData();
    Complex c4;
    c4 = c1.subCom(c2);
    cout<<"Substraction  of c1 and c2 = ";
    c4.showData();
    Complex c5;
    c5 = c1.mulComplex(c2);
    cout<<"Multiplication of c1 and c2 = ";
    c5.showData();
    return 0;
}

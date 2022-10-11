
/* Activity:
Create a class, Heater that contains a single integer field, temperature. Define a 
constructor that takes no parameters. The temperature field should be set to the value 15 in the
 constructor. Define the mutators: warmer and cooler, whose effect is to increase or decrease the value
  of the temperature by 5 respectively. Define an accessor method to return the value of temperature. Demonstrate 
  the use of Heater class.  */


#include <iostream>
using namespace std;

class Heater{
	private:
		int temprature;
	public:
		Heater(){
			temprature = 15;
		}		
	void warmer(){
			temprature = temprature+5;
		};
	void cooler(){
			temprature = temprature-5;
		};
	void show(){
		cout<<"Temprature:"<<temprature<<endl;
	}
};
main(){
	//Object 1
	cout<<"Heater=1"<<endl;
	Heater h1;
	h1.show();
	h1.warmer();
	h1.show();
	h1.cooler();
	h1.show();
	//Object 2
	cout<<"\nHeater=2"<<endl;
	Heater h2;
	h2.show();
	h2.cooler();
	h2.show();
	h2.warmer();
	h2.show();
	
	
}
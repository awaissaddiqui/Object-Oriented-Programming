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
			temprature = temprature-5;
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
	Heater h1;
	h1.show();
	h1.warmer();
	h1.show();
	h1.cooler();
	h1.show();
	//Object 2
	
	Heater h2;
	h2.show();
	h2.cooler();
	h2.show();
	h2.warmer();
	h2.show();
	
	
}
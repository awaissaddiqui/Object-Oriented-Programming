#include <iostream>
using namespace std;
//A class with no pure virtual function is a concrete class.
class shape{// base class abstract class
	public:
	virtual	void draw(){
			cout<<"Draw a shape \n";
		}
		};
	class circle:public shape{
		public:
			void draw(){
				cout<<"Draw a cicrle \n";
			}
	};
	class rectangle:public shape{
		public:
			void draw(){
				cout<<"Draw a rectangle \n";
			}
	};
	class triangle:public shape{
		public:
			void draw(){
				cout<<"Draw a triangle \n";
			}
	};
main(){
	shape *sh;
	circle c1;
	rectangle r1;
	triangle t1;
	
	sh = &c1;
	sh->draw();
	
	sh = &r1;
	sh->draw();
	
	sh = &t1;
	sh->draw();
	
}
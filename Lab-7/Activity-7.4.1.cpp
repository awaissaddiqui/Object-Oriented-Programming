#include <iostream>
using namespace std;

class shape{
	protected:
		double area, volume;
	public:
		virtual void Area()=0;
		virtual void Volume()=0;
		virtual	void display() = 0;
};
class point:public shape{
	protected:
		int xC, yC;
	public:
		point():xC(0),yC(0){}
		point(int x, int y):xC(x),yC(y){}
		void Area(){
			 area=0;
		}
		void Volume(){
			 volume=0;
		}
		void display(){
		cout<<"Point \t X coordinate = "<<xC<<"\t Y coordinate = "<<yC<<endl;
			}
};
class Circle:public point{
	protected:
		int radius;
	public:
		Circle():point(),radius(1){}
		Circle(int x , int y, int r):point(x, y),radius(r){}
		void Area(){
			area = 3.14 * radius * radius;
		}
		void Volume(){
			volume =0;
		}
		void display(){
			cout<<"X-coordinate = "<<xC<<"\t Y-coordinate = "<<yC<<endl;
			cout<<"Radius = "<<radius<<endl;
			cout<<"Area of Circle = "<<area<<endl;
		}
};
class Cylinder:public Circle{
	protected:
		double height;
	public:
		Cylinder():Circle(), height(1){}
		Cylinder(int x, int y, int r, double h):Circle(x , y, r),height(h){}
		void Area(){
			area= 2 * 3.14 * radius * (height + radius);
		}
		void Volume(){
			volume = 3.14 * radius * radius * height;
		}
		void  display(){
			cout<<"Area of Cylinder = "<<area<<endl;
			cout<<"Volume of Cylinder = "<<volume<<endl;
			cout<<"Radius of Cylinder = "<<radius; 
		}
		
};
main(){
	shape *s1;
	point p1(4,6);
	Circle c1(2,3,5);
	Cylinder Cy(7,8,1,9);
	
	s1 = &p1;
	s1->display();
	
	s1 = &c1;
	s1->display();
	
	s1 = &Cy;
	s1->display();
	
	
}
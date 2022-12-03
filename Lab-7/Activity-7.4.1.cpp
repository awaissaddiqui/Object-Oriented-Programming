#include <iostream>
using namespace std;
class shape{
	private:
		float area, volume;
	public:
	computing_Area(){
		
	}
	computing_Volume(){
		
	}
	void display(){
		
	}
};
class point:public shape{
	private:
		int x, y;
	public:
		point(){
			x=0;
			y=0;
		};
		point(int a , int b){
			x = a;
			y = b;
		}; 
		
};
class circle:public point{
	private:
		double radius;
	public:
		circle(){
			radius = 0.0;
		}
		circle(double i, int j, int k){
			radius = i;
			x = j;
			y = k;
		}
};
class cylinder:public circle{
	private:
		double height;
    public:
    	cylinder(){
    		height = 0.0;
		}
		cylinder(int x , int y, double radius, double h){
			x =j;
			y =k;
			radius =i;
			h=height;
		}
};


main(){
	shape
}
/*1.4.2 Activity 
Create a class called Point that has two data members: x- and 
y-coordinates of the point. Provide a no argument and a 2-argument
 constructor. Provide separate get and set functions for the each of the data 
 members i.e. getX, getY, setX, setY. The getter functions should return the corresponding
  values to the calling function. Provide a display method to display the point in (x, y) format. 
  Make appropriate functions const. 
*/


#include <iostream>
using namespace std;

class Point{
	private:
		double x,y;
	public:
		Point(){
			x = 0;
			y = 0; 
		};
	void setX(double xCon){
		x= xCon;
	};
	void setY(double yCon){
		y = yCon;
	}
};
main(){
	
}
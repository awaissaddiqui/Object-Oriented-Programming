#include <iostream>
using namespace std;

class Student{
	private:
		int age;
		float gpa;
		char* name;// This mean that a dynamic memory is asingn to this variable .That's why it is called pointer char array
	public:
		Student(): age(0), gpa(0.0), name(""){}
		Student(int a, float g, char n){
			age=a;
			gpa=g;
			*name=n;
		}
		void setName(char *n){
			name= n;
		}
		void setAge(int a){
			age=a;
		}
		void setGpa(float g){
			gpa=g;
		}
		int getAge(){
			return age;
		}
		char getName(){
			return *name;
		}
		float getGpa(){
			return gpa;
		}
		void displayRecord(){
			cout<<"Name ="<<name<<"\n Age ="<<age<<"\n Gpa ="<<gpa;
		}
};
main(){
	Student obj1;
	obj1.setName("Awais Saddiqui");
	obj1.setGpa(3.2);
	obj1.setAge(20);
	obj1.displayRecord();
}
#include <iostream>
#include <string>
#include <studio.h>
#include <cstring>

using namespace std;

class Employee{
	private:
		char *name;
		char *department;
		double salary;
		double serviceInYears;
	public:
		Employee(): name("Awais Saddiqui"), department("DCSE"),salary(1000),serviceInYears(20) {};
		Employee(char n[], char dep[], double sal, double service){
			name = n;
			department=dep;
			salary= sal;
			serviceInYears = service;
		}
		Employee(const Employee &s){
		 int nameLength = strlen(s.name);
		 int depLength = strlen(s.department);
		 name = new char[nameLength+1];
		 department = new char[depLength+1]
		 strcpy(name, s.name);
		 strcpy(department, s.department);
		 salary = s.salary;
		 serviceInYears = s.serviceInYears;
		}
		~Employee(){
			cout<<"Object Terminated...";
			delete[] name;
			delete[] department;
		}
		void display(){
			cout<<"Employee Name : "<<name;
			cout<<"Department : "<<department;
			cout<<"Salary : "<<salary;
			cout<<"Service In Years : "<<service;
		}
		void input(){
			cout<<"Enter Employee Name : ";
			
		}
};
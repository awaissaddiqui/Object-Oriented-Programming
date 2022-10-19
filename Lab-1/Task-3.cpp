/*1.4.3 Activity 
Create a class called BankAccount that models a checking account at a bank. 
The program creates an account with an opening balance, displays the balance,
 makes a deposit and a withdrawal, and then displays the new balance. Note in withdrawal
  function, if balance is below Rs. 500 then display message showing insufficient balance
   otherwise allow withdrawal. 
*/

#include <iostream>
using namespace std;

class bankAccount{
	private:
		int balance;
	
	public:
		bankAccount(){
			balance = 1000;
		};
		void deposit(int payment){
			balance = balance + payment;
		}
		void withdrawal(int amount){
			if(balance <= 500){
				cout<<"Insufficient balance";
			}else{
				balance = balance - amount ;
			}
		};
		void display(){
			cout<<"Current Balance = "<<balance<<endl;
		}
};

main(){
	bankAccount obj1;
	obj1.display();
	obj1.deposit(500);
	cout<<"Current Amount = ";
	obj1.display();
	obj1.withdrawal(500);
	cout<<"Current Amount = ";
	obj1.display();
	obj1.withdrawal(500);
	cout<<"Current Amount = ";
	obj1.display();
	obj1.withdrawal(500);
	cout<<"\n";
	obj1.display();
	
}
#include  <iostream>
#include  <stdio.h>
#include  <conio.h>
using namespace std;
class Bank{
	char name[100]; 
	char add[100];
	char y[100];
	double balance;
	double d;
	double w;
	public:
		void openAccount();
		void depositMoney();
		void withdrawMoney();
		void displayAccount();
};
void Bank::openAccount(){
	cout << "Enter your full name: "<<endl;
	cin.ignore();
	cin.getline(name, 100);
	cout << "Enter your address starting with(-): "<<endl;
	cin.ignore();
	cin.getline(add, 100);
	cout << "Type of account.Saving(s) or Current(c): "<<endl;
	cin.ignore();
	cin.getline(y, 100);
	cout << "Enter some amount to activate your account: "<<endl;
	cin >>balance;
	cout << "Your account has successfully been activated"<<endl;
}
void Bank::depositMoney(){
	cout << "Enter amount you want to deposit: "<<endl;
	cin >>d;
	balance += d;
	cout << "Balance: Ksh "<<balance<<endl;
}
void Bank::withdrawMoney(){
	cout << "Enter amount you want to withdraw: "<<endl;
	cin >>w;
	balance -= w;
	cout << "Balance: Ksh "<<balance<<endl;
}
void Bank::displayAccount(){
	cout << "Owner name: "<<name<<endl;
	cout << "Address: "<<add<<endl;
	cout << "Account type: "<<y<<endl;
	cout << "Balance: Ksh "<<balance<<endl;
}


int main(){
	int ch;
	
	Bank obj;
	
	do{
	    
	
	cout << "1) Open account"<<endl;
	cout << "2) Deposit money"<<endl;
	cout << "3) Withdraw money"<<endl;
	cout << "4) Display account"<<endl;
	cout << "5) exit"<<endl;
	cout << "Select from the above options"<<endl;
	cin >>ch;
	
	switch(ch){
		case 1:
			cout << "1) Open account"<<endl;
			obj.openAccount();
			break;
		case 2:
		    cout << "2) Deposit money"<<endl;
			obj.depositMoney();
			break;
		case 3:
		    cout << "3) Withdraw money"<<endl;
			obj.withdrawMoney();
			break;
		case 4:
		    cout << "4) Display account"<<endl;
			obj.displayAccount();
			break;
		case 5:
		    if(ch == 5){
		    	exit(1);
			}
			break;
		default:
		    cout << "Invalid input!!!"<<endl;

		cout << "Press Y to go back to the main menu"<<endl;
		cout << "Press N to quit"<<endl;
	
			ch = getch();
			if(ch == 'y' || ch == 'Y'){
				cout << "1) Open account"<<endl;
	cout << "2) Deposit money"<<endl;
	cout << "3) Withdraw money"<<endl;
	cout << "4) Display account"<<endl;
	cout << "5) exit"<<endl;
	cout << "Select from the above options"<<endl;
	cin >>ch;
	
	switch(ch){
		case 1:
			cout << "1) Open account"<<endl;
			obj.openAccount();
			break;
		case 2:
		    cout << "2) Deposit money"<<endl;
			obj.depositMoney();
			break;
		case 3:
		    cout << "3) Withdraw money"<<endl;
			obj.withdrawMoney();
			break;
		case 4:
		    cout << "4) Display account"<<endl;
			obj.displayAccount();
			break;
		case 5:
		    if(ch == 5){
		    	exit(1);
			}
			break;
		default:
		    cout << "Invalid input!!!"<<endl;
		cout << "Press Y to go back to the main menu"<<endl;
		cout << "Press N to quit"<<endl;
			}
		}if(ch == 'n' || ch == 'N'){
			exit(1);
		}
	
 }

	
}while(ch == 'y' || ch == 'Y');
getch();
}

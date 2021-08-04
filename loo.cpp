#include <iostream>
using namespace std;
class Bank{
	int ch,d;
	string name;
	public:
		void mainMenu();
		void createAccount();
		
};
void Bank::mainMenu(){
	cout<<"1) Create Account"<<endl;
	cout<<"2) Check Account"<<endl;
	cin>>ch;
	switch(ch){
		case 1:
			createAccount();
			break;
	}
}
void Bank::createAccount(){
	cout<<"Enter your name: "<<endl;
	cin>>name;
	cout<<"Deposit: "<<endl;
	cin>>d;
	cout<<"Press 98 to go the main menu"<<endl;
	cin>>ch;
	if(ch==98){
		mainMenu();
	}else{
		do{
			cout<<"Invalid input!"<<endl;
			cout<<"Press 98 to go the main menu"<<endl;
	        cin>>ch;
		}while(ch!=98);
		mainMenu();
	}
}
int main(){
  Bank je;
  je.mainMenu();	
	
}

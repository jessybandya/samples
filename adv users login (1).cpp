#include   <iostream>
#include   <stdio.h>
#include   <conio.h>
using namespace std;

class LoginMan{
	private:
		string userName= "gmail.com";
		string passWord= "uwimana";
	public:
	    string attemptUserName;
		string attemptPassWord;
		int ch;
		int guessCount;
		
		LoginMan(){}
		
		login(){
			cout << "================================================================"<<endl;
			cout << "Please enter all your details to login"<<endl;
			cout << "USERNAME"<<endl;
			cout << "APPROPRIATE PASSWORD"<<endl;
			cout << "================================================================"<<endl;
			cout << "Press enter key to continue"<<endl;
			ch = getch();
			
			cout << "Enter your username: "<<endl;
			cin >>attemptUserName;
			if(userName == attemptUserName){
				cout << "Enter password: "<<endl;
				cin >>attemptPassWord;
				
				if(passWord == attemptPassWord){
					cout << "You have just logged in"<<endl;
					cout << "Press Y to quit: "<<endl;
					ch = getch();
					cout << "You have successfully quit"<<endl;
				}else{
					cout << "Password isn't matching with the username!!!"<<endl;
					cout << "==========================================================="<<endl;
					
					
					do{
						cout << "Press N to retry "<<endl;
								cout << "Press Y to quit"<<endl;
						ch = getch();
						if(ch == 'n' || ch == 'N'){
							cout << "Enter password: "<<endl;
							cin >>attemptPassWord;
							
							if(passWord == attemptPassWord){
								cout << "You have just logged in"<<endl;
								cout << "Press Y to quit"<<endl;
								ch = getch();
								cout << ""<<endl;
							}else{
								cout << "Password isn't matching with the username!!!"<<endl;
								cout << "==========================================================="<<endl;
								
							}
							
						}if(ch == 'y' || ch == 'Y'){
							cout << "You have successfully quit"<<endl;
							cout << "==========================================================="<<endl;
							exit(1);
						}
					}while(ch == 'n' || ch == 'N');
				}
			}else{
				cout << "Wrong username!!!"<<endl;
				cout << "==========================================================="<<endl;
				cout << "Press N to retry your username"<<endl;
				cout << "Press Y to quit"<<endl;
				
				do{
					ch = getch();
					if(ch == 'n' || ch == 'N'){
						cout << "Enter your username: "<<endl;
						cin >>attemptUserName;
						if(userName == attemptUserName){
							cout << "Enter password: "<<endl;
							cin >>attemptPassWord;
						}else{
							cout << "Wrong username!!!"<<endl;
							cout << "==========================================================="<<endl;
							cout << "Press N to retry your username"<<endl;
							cout << "Press Y to quit"<<endl;
						}
					}if(ch == 'y' || ch == 'Y'){
						cout << "You have successfully quit"<<endl;
						cout << "==========================================================="<<endl;
						exit(1);
					}
				}while(ch == 'n' || ch == 'N');
			}
		}	
};

int main(){
	LoginMan obj;
	obj.login();
}

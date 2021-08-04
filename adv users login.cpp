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
			cout << "Enter your username: "<<endl;
			cin >>attemptUserName;
			if(userName == attemptUserName){
				cout << "Enter password: "<<endl;
				cin >>attemptPassWord;
				
				if(passWord == attemptPassWord){
					cout << "You have just logged in"<<endl;
					cout << "Press 0 to quit: "<<endl;
					ch = getch();
					cout << "You have successfully quit"<<endl;
				}else{
					cout << "Password isn't matching with the username!!!"<<endl;
					cout << ""<<endl;
					cout << ""<<endl;
					
					do{
						cout << "Press 98 to retry your password"<<endl;
					cout << "Press 0 to quit"<<endl;
						ch = getch();
						if(ch == 98 || ch == 98){
							cout << "Enter password: "<<endl;
							cin >>attemptPassWord;
							
							if(passWord == attemptPassWord){
								cout << "You have just logged in"<<endl;
								cout << "Press 0 to quit"<<endl;
								ch = getch();
								cout << ""<<endl;
							}else{
								cout << "Password isn't matching with the username!!!"<<endl;
								cout << ""<<endl;
								cout << ""<<endl;
							}
						}if(ch == 0 || ch == 0){
							cout << "You have successfully quit"<<endl;
							exit(1);
						}
					}while(ch == 98 || ch == 98);
				}
			}else{
				cout << "Wrong username!!!"<<endl;
				cout << "Press 98 to retry your username"<<endl;
				cout << "Press 0 to quit"<<endl;
				
				do{
					ch = getch();
					if(ch == 98 || ch == 98){
						cout << "Enter your username: "<<endl;
						cin >>attemptUserName;
						if(userName == attemptUserName){
							cout << "Enter password: "<<endl;
							cin >>attemptPassWord;
						}else{
							cout << "Wrong username!!!"<<endl;
							cout << "Press 98 to retry your usernamej"<<endl;
							cout << "Press 0 to quit"<<endl;
						}
					}if(ch == 0 || ch == 0){
						cout << "You have successfully quit"<<endl;
						exit(1);
					}
				}while(ch == 98 || ch == 98);
			}
		}	
};

int main(){
	LoginMan obj;
	obj.login();
}

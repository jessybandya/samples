#include   <iostream>
using namespace std;
class LoginMan{
	private:
		string userName= "gmail.com";
		string passWord= "uwimana";
	public:
	    string attemptUserName;
		string attemptPassWord;
		
		LoginMan(){}
		
		login(){
			cout << "Enter your userName: "<<endl;
			cin >> attemptUserName;
			
			if(userName == attemptUserName){
				cout << "Enter Password: "<<endl;
				cin >>attemptPassWord;
				if(passWord == attemptPassWord){
					cout << "You have just logged in"<<endl;
				}else{
					cout << "Wrong password"<<endl;
				}
			}else{
				cout << "Wrong username"<<endl;
			}
		}	
};

int main(){
	LoginMan obj;
	obj.login();
}

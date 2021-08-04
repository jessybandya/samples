#include <iostream>
#include <conio.h>
using namespace std;
class Bank{
	int ch;
	int w;
	int b;
	int d;
	string adminusername;
	string adminpassword;
	string name;
	string normalusername;
	string normalpassword;
	string attemptname;
	string attemptusername;
	string attemptpassword;
	string attemptadminusername;
	string attemptadminpassword;
	public:
		void mainMenu();
		void fAdmin();
		void adminPage();
		void userPage();
		void fUser();
};
void Bank::mainMenu(){
	cout << "1) Normal User Login"<<endl;
	cout << "2) Administration  Login"<<endl;
	cout << "Select From Above Options"<<endl;
	cin>>ch;
	switch(ch){
		case 1:
			fUser();
			break;
		case 2:
		     fAdmin();
			break;
		default:
		    cout<<"Invalid Input"<<endl;
			do{
				mainMenu();
					
	}while(ch>2||ch<1);
}
}
void Bank::fAdmin(){
	cout << "1) Login As Admin"<<endl;
	cout << "2) Create Admin Account"<<endl;
	cin>>ch;
	switch(ch){
		case 1:
			cout<<"Enter your Username: "<<endl;
			cin>>adminusername;
			if(attemptadminusername != adminusername){
				do{
					
					cout<<"Inavailable Admin UserName!!!"<<endl;
					cout<<"Enter your Username: "<<endl;
			        cin>>adminusername;
			        
			        
				}while(attemptadminusername != adminusername);
				cout<<"Enter Password: "<<endl;
				cin>>adminpassword;
				if(attemptadminpassword!=adminpassword){
					do{
					
					cout<<"Wrong Admin Password!!!"<<endl;
					cout<<"Enter Password: "<<endl;
				    cin>>adminpassword;
		     	}while(attemptadminpassword!=adminpassword);
		     	adminPage();
				}else{
					adminPage();
				}
			}else{
				cout<<"Enter Password: "<<endl;
				cin>>adminpassword;
				if(attemptadminpassword!=adminpassword){
					do{
					
					cout<<"Wrong Admin Password!!!"<<endl;
					cout<<"Enter Password: "<<endl;
				    cin>>adminpassword;
		     	}while(attemptadminpassword!=adminpassword);
		     	adminPage();
				}else{
					adminPage();
				}
			}
			break;
		case 2:
			cout<<"Creating Admin Account"<<endl;
			cout<<"Create Admin Username: "<<endl;
			cin>>attemptadminusername;
			cout<<"Set Admin Password: "<<endl;
			cin>>attemptadminpassword;
			cout<<"Successefully Opened Admin Account"<<endl;
			cout<<"Press 98 to go back to the Main Menu"<<endl;
			cout<<"Press 00 to go Back to the Admin Login Page"<<endl;
			cin>>ch;
			if(ch==98){
				mainMenu();
			}
			else if(ch==00){
				fAdmin();				
			}else{
				do{
				cout<<"Invalid Input"<<endl;
				cout<<"Press 98 to go back to the Main Menu"<<endl;
			cout<<"Press 00 to go Back to the Admin Login Page"<<endl;
			cin>>ch;
			if(ch==98){
				mainMenu();
			}
			else if(ch==00){
				fAdmin();				
			}
			}while(ch!=98||ch!=00);
			}
		    break;
		default:
		    cout<<"Invalid Input"<<endl;
			do{
				fAdmin();
			}while(ch>2||ch<1);		
			
	}
}
void Bank::adminPage(){
	cout<<"-------------------------"<<endl;
	cout<<"Welcome Admin"<<endl;
	cout<<"1) WithDraw Money For Client"<<endl;
	cout<<"2) Deposit for Client"<<endl;
	cout<<"3) Register New Client"<<endl;
	cout<<"4) Check Clients Account"<<endl;
	cout<<"5) Reset Admin Login Details"<<endl;
	cout<<"6) Go back to the mainMenu"<<endl;
	cout<<"7) Exit"<<endl;
	cin>>ch;
	switch(ch){
		case 1:
			cout<<"Withdrwaing Money"<<endl;
			cout<<"Enter Clients Amount: "<<endl;
			cin>>w;
			b-=w;
			cout<<"Successfully Withdrawn: Ksh "<<w<<endl;
			cout<<"Press 98 to go Back to the main Menu"<<endl;
			cout<<"Press 00 to go Back to The admin Menu"<<endl;
			cin>>ch;
			if(ch==98){
				mainMenu();
			}
			else if(ch==00){
				adminPage();
			}
			else{
				do{
				
				cout<<"Invalid Input"<<endl;
				cout<<"Press 98 to go Back to the main Menu"<<endl;
			    cout<<"Press 00 to go Back to The admin Menu"<<endl;
			    cin>>ch;
			    if(ch==98){
				mainMenu();
			}
			else if(ch==00){
				adminPage();
			}
			    
			}while(ch!=98||ch!=00);
			    
			}
			break;
		case 2:
			cout<<"Depositing Money"<<endl;
			cout<<"Enter Amount you Want to Deposit: "<<endl;
			cin>>d;
			b+=d;
			cout<<"Successfully Deposited: Ksh "<<d<<endl;
			cout<<"Press 98 to go Back to the main Menu"<<endl;
			cout<<"Press 00 to go Back to The admin Menu"<<endl;
			cin>>ch;
			if(ch==98){
				mainMenu();
			}
			else if(ch==00){
				adminPage();
			}
			else{
				do{
				
				cout<<"Invalid Input"<<endl;
				cout<<"Press 98 to go Back to the main Menu"<<endl;
			    cout<<"Press 00 to go Back to The admin Menu"<<endl;
			    cin>>ch;
			    if(ch==98){
				mainMenu();
			}
			else if(ch==00){
				adminPage();
			}
			    
			}while(ch!=98||ch!=00);
			    
			}
			break;
		case 3:
		   	cout<<"Registering new Client"<<endl;
		   	cout<<"Enter Clients Name: "<<endl;
		   	cin>>name;
		   	cout<<"Create Clients Username: "<<endl;
		   	cin>>normalusername;
		   	cout<<"Create Clients Password: "<<endl;
		   	cin>>normalpassword;
		   	cout<<"Deposit Clients Money to Activate Account: "<<endl;
		   	cin>>b;
		   	cout<<"Successfully Opened Clients Account"<<endl;
			cout<<"Press 98 to go Back to the main Menu"<<endl;
			cout<<"Press 00 to go Back to The admin Menu"<<endl;
			cin>>ch;
			if(ch==98){
				mainMenu();
			}
			else if(ch==00){
				adminPage();
			}
			else{
				do{
				
				cout<<"Invalid Input"<<endl;
				cout<<"Press 98 to go Back to the main Menu"<<endl;
			    cout<<"Press 00 to go Back to The admin Menu"<<endl;
			    cin>>ch;
			    if(ch==98){
				mainMenu();
			}
			else if(ch==00){
				adminPage();
			}
			    
			}while(ch!=98||ch!=00);
			    
			}
			break;
		case 4:
		    cout<<"Checking Clients Account"<<endl;
			cout<<"Account Owner: "<<name<<endl;
			cout<<"Clients Username: "<<normalusername<<endl;
			cout<<"Clients password: "<<normalpassword<<endl;
			cout<<"Clients Balance: Ksh "<<b<<endl;
			cout<<"Press 98 to go Back to the main Menu"<<endl;
			cout<<"Press 00 to go Back to The admin Menu"<<endl;
			cin>>ch;
			if(ch==98){
				mainMenu();
			}
			else if(ch==00){
				adminPage();
			}
			else{
				do{
				
				cout<<"Invalid Input"<<endl;
				cout<<"Press 98 to go Back to the main Menu"<<endl;
			    cout<<"Press 00 to go Back to The admin Menu"<<endl;
			    cin>>ch;
			    if(ch==98){
				mainMenu();
			}
			else if(ch==00){
				adminPage();
			}
			    
			}while(ch!=98||ch!=00);
			    
			}
			break;
		case 5:
		    cout<<"Changing Admin Login Details"<<endl;
			cout<<"Change Username: "<<endl;
			cin>>attemptadminusername;
			cout<<"Change Password: "<<endl;
			cin>>attemptadminpassword;
			cout<<"Successfully Changed Login Details"<<endl;
			cout<<"Press 98 to go Back to the main Menu"<<endl;
			cout<<"Press 00 to go Back to The admin Menu"<<endl;
			cin>>ch;
			if(ch==98){
				mainMenu();
			}
			else if(ch==00){
				adminPage();
			}
			else{
				do{
				
				cout<<"Invalid Input"<<endl;
				cout<<"Press 98 to go Back to the main Menu"<<endl;
			    cout<<"Press 00 to go Back to The admin Menu"<<endl;
			    cin>>ch;
			    if(ch==98){
				mainMenu();
			}
			else if(ch==00){
				adminPage();
			}
			    
			}while(ch!=98||ch!=00);
			    
			}
			break;
		case 6:
		     mainMenu();
			 break;
		case 7:
		    exit(0);
		default:
		    cout<<"Invalid Input"<<endl;
			do{
				adminPage();
			}while(ch>7||ch<1);		 	
					
		    	
	}
	
}
void Bank::fUser(){
	cout<<"Hello "<<name<<endl;
	cout<<"Enter Username: "<<normalusername<<"||Enter Password: "<<normalpassword<<endl;
	cout<<"--------------------------------------------------------------------------"<<endl;
	cout<< "Enter your name: "<<endl;
	cin>>attemptname;
	if(attemptname!=name){
		do{
		
		cout<<"Enter Your name Correctly!"<<endl;
		cout<< "Enter your name: "<<endl;
	    cin>>attemptname;
	}while(attemptname!=name);
	      cout<<"Enter Your Username: "<<endl;
		cin>>attemptusername;
		if(attemptusername!=normalusername){
			do{
				cout<<"Inavailable username!!!"<<endl;
				cout<<"Enter Your Username: "<<endl;
		        cin>>attemptusername;
			}while(attemptusername!=normalusername);
			cout<<"Enter your Password: "<<endl;
			cin>>attemptpassword;
			if(attemptpassword!=normalpassword){
				do{
				
				cout<<"Wrong Password!!!"<<endl;
				cout<<"Enter your Password: "<<endl;
			    cin>>attemptpassword;
			}while(attemptpassword!=normalpassword);
			   userPage();
			}
		}else{
			cout<<"Enter your Password: "<<endl;
			cin>>attemptpassword;
			if(attemptpassword!=normalpassword){
				do{
				
				cout<<"Wrong Password!!!"<<endl;
				cout<<"Enter your Password: "<<endl;
			    cin>>attemptpassword;
			}while(attemptpassword!=normalpassword);
			   userPage();
			}
		}
	}else{
		cout<<"Enter Your Username: "<<endl;
		cin>>attemptusername;
		if(attemptusername!=normalusername){
			do{
				cout<<"Inavailable username!!!"<<endl;
				cout<<"Enter Your Username: "<<endl;
		        cin>>attemptusername;
			}while(attemptusername!=normalusername);
			cout<<"Enter your Password: "<<endl;
			cin>>attemptpassword;
			if(attemptpassword!=normalpassword){
				do{
				
				cout<<"Wrong Password!!!"<<endl;
				cout<<"Enter your Password: "<<endl;
			    cin>>attemptpassword;
			}while(attemptpassword!=normalpassword);
			   userPage();
			}else{
				userPage();
			}
		}else{
			cout<<"Enter your Password: "<<endl;
			cin>>attemptpassword;
			if(attemptpassword!=normalpassword){
				do{
				
				cout<<"Wrong Password!!!"<<endl;
				cout<<"Enter your Password: "<<endl;
			    cin>>attemptpassword;
			}while(attemptpassword!=normalpassword);
			   userPage();
			}else{
				userPage();
			}
		}
	}
}
void Bank::userPage(){
	cout<<"Welcome to the Normal User Page"<<endl;
	cout<<"1) Withdraw Money"<<endl;
	cout<<"2) Check Account"<<endl;
	cout<<"3) Reset User Login details"<<endl;
	cout<< "4) Go back to the Main Page"<<endl;
	cout<< "5) Exit"<<endl;
	cout<<"Select from Above Options to Proceed"<<endl;
	cin>>ch;
	switch(ch){
		case 1:
			cout<<"Withdraw Money"<<endl;
			cout<<"Enter Amount you want to Withdraw: "<<endl;
			cin>>w;
			if(w>b){
			cout<<"Transaction Failed due to Insufficient Balance"<<endl;
			cout<<"Press 98 to go Back to the main Menu"<<endl;
			cout<<"Press 00 to go Back to The User Page"<<endl;
			cin>>ch;
			if(ch==98){
				mainMenu();
			}
			else if(ch==00){
				userPage();
			}
			else{
				do{
				
				cout<<"Invalid Input"<<endl;
				cout<<"Press 98 to go Back to the main Menu"<<endl;
			    cout<<"Press 00 to go Back to The admin Menu"<<endl;
			    cin>>ch;
			    if(ch==98){
				mainMenu();
			}
			else if(ch==00){
				userPage();
			}
			    
			}while(ch!=98||ch!=00);
			    
			}
			}else{
				b-=w;
				cout<<"Successfully Withdrawn: Ksh "<<w<<endl;
				cout<<"Press 98 to go Back to the main Menu"<<endl;
			cout<<"Press 00 to go Back to The User Page"<<endl;
			cin>>ch;
			if(ch==98){
				mainMenu();
			}
			else if(ch==00){
				userPage();
			}
			else{
				do{
				
				cout<<"Invalid Input"<<endl;
				cout<<"Press 98 to go Back to the main Menu"<<endl;
			    cout<<"Press 00 to go Back to The admin Menu"<<endl;
			    cin>>ch;
			    if(ch==98){
				mainMenu();
			}
			else if(ch==00){
				userPage();
			}
			    
			}while(ch!=98||ch!=00);
			    
			}
				
			}
			break;
		case 2:
		  cout<<"My Account"<<endl;
		  cout<<"Owner: "<<name<<endl;
		  cout<<"Balance: Ksh "<<b<<endl;
		  cout<<"Press 98 to go Back to the main Menu"<<endl;
			cout<<"Press 00 to go Back to The User Page"<<endl;
			cin>>ch;
			if(ch==98){
				mainMenu();
			}
			else if(ch==00){
				userPage();
			}
			else{
				do{
				
				cout<<"Invalid Input"<<endl;
				cout<<"Press 98 to go Back to the main Menu"<<endl;
			    cout<<"Press 00 to go Back to The admin Menu"<<endl;
			    cin>>ch;
			    if(ch==98){
				mainMenu();
			}
			else if(ch==00){
				userPage();
			}
			    
			}while(ch!=98||ch!=00);
			    
			}
			break;
		case 3:
		   cout<<"Reset Login Details"<<endl;
		   cout<<"Change Your name: "<<endl;
		   cin>>name;
		   cout<<"Change Username: "<<endl;
		   cin>>normalusername;
		   cout<<"Reset Password: "<<endl;
		   cin>>normalpassword;
		   cout<<"Successfully Change Your Login Details"<<endl;
		   cout<<"Press 98 to go Back to the main Menu"<<endl;
			cout<<"Press 00 to go Back to The User Page"<<endl;
			cin>>ch;
			if(ch==98){
				mainMenu();
			}
			else if(ch==00){
				userPage();
			}
			else{
				do{
				
				cout<<"Invalid Input"<<endl;
				cout<<"Press 98 to go Back to the main Menu"<<endl;
			    cout<<"Press 00 to go Back to The admin Menu"<<endl;
			    cin>>ch;
			    if(ch==98){
				mainMenu();
			}
			else if(ch==00){
				userPage();
			}
			    
			}while(ch!=98||ch!=00);
			    
			}
			break;
		case 4:
		    mainMenu();
			break;
		case 5:
		    exit(0);
			break;
		default:
		   cout<<"Invalid Input"<<endl;
		do{
			userPage();
		}while(ch>5||ch<1);   					
	}
	
}




int main(){
	Bank je;
	je.mainMenu();
	
}

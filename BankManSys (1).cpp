#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
class Bank{
	string name, add;
	char y[100];
	double balance;
	double a;
	double amount;
	int ch;
	int guessCount;
	public:
		void openAccount();
		void depositMoney();
		void withdrawMoney();
		void displayAccount();
};
void Bank::openAccount(){
	cout << "Enter your full name: "<<endl;
	cin.ignore();
	getline(cin, name);
	cout << "Enter your address (starting with(-)): "<<endl;
	cin.ignore();
	cin >>add;
	cout << "What type of account do you want. Saving(s) or Current(c): "<<endl;
	cin >>y;
	if(y == "c" || y == "s"){
		cout << "Your account has been successful activated"<<endl;
		cout << "==============================================================="<<endl;
	}else{
		
		cout << "You are left with one attempt, reply with 's' or 'c'"<<endl;
		cout << "What type of account do you want. Saving(s) or Current(c): "<<endl;
		cin >>y;
		if(y != "s" || y != "c"){
			   
			if(ch == 'n' || ch == 'N'){
				ch = getch();
				cout << "You are out of attempts, press N to quit"<<endl;
				exit(1);
		}
		}else{
		
		cout << "Your account has been successful activated"<<endl;
	cout << "==============================================================="<<endl;
}
	cout << "Deposit some amount to activate your account: Ksh "<<endl;
	cin >>balance;
	cout << "Your account has been successful activated."<<endl;
	cout << "==============================================================="<<endl;
}
		    
		    
		do{
			cout << "Press Y to go back to main menu"<<endl;
	       cout << "Press N to exit"<<endl;
		    
	       ch = getch();
	       
	       
		    if(ch == 'y' || ch == 'Y'){
		    int ch;	
		    	
	cout << "==============================================================="<<endl;
	cout << "|| Welcome to KCB mobile banking                             ||"<<endl;
	
	
	cout << "||           1) Open account                                 ||"<<endl;
	cout << "||           2) Deposit money                                ||"<<endl;
	cout << "||           3) Withdraw money                               ||"<<endl;
	cout << "||           4) Display Account                              ||"<<endl;
	cout << "||           5) Exit                                         ||"<<endl;
	cout << "|| Select from the above options                             ||"<<endl;
	cout << "==============================================================="<<endl;
	cin >> ch;
	
	switch(ch){
		case 1:
	
	cout << "Enter your full name: "<<endl;
	cin.ignore();
	getline(cin, name);
	cout << "Enter your address (starting with(-)): "<<endl;
	cin.ignore();
	cin >>add;
	cout << "What type of account do you want. Saving(s) or Current(c): "<<endl;
	cin >>y;
	if(y == "c" || y == "s"){
		cout << "Your account has been activated"<<endl;
	}else{
		cout << "Reply with 's' or 'c'"<<endl;
		cout << "What type of account do you want. Saving(s) or Current(c): "<<endl;
	cin >>y;
	}
	if(y == "c" || y == "s"){
		cout << "Your account has been activated"<<y<<endl;
	}else{
		cout << "You are left with one attepmpt, reply with 's' or 'c'"<<endl;
		cout << "What type of account do you want. Saving(s) or Current(c): "<<endl;
	cin >>y;
	if(y != "c" || y != "s"){
		cout << "Out of attempts press N to quit"<<endl;
		if(ch == 'n' || ch == 'N'){
			exit(1);
		}
	}
	cout << "Deposit some amount to activate your account: Ksh "<<endl;
	cin >>balance;
	cout << "Your account has successful been activated."<<endl;
	cout << "==============================================================="<<endl;
}
		break;
		
	    case 2:
	cout << "Enter amount you want to deposit: "<<endl;
	cin >>a;
	balance += a;
	cout << "Balance: Ksh "<<balance<<endl;
	cout << "==============================================================="<<endl;
	        break;
	        
		case 3:
			cout << "Enter amount you want to withdraw: "<<endl;
	cin >> amount;
	balance -= amount;
	cout << "Balance: Ksh "<<balance<<endl;
	cout << "==============================================================="<<endl;
	 cout << "Press Y to go back to main menu"<<endl;
	 cout << "Press N to exit"<<endl;
	 break;
	 
	 case 4:
	cout << "==============================================================="<<endl; 	
	cout << "Name: "<<name<<endl;
	cout << "Address: "<<add<<endl;
	cout << "Account type: "<<y<<endl;
	cout << "Balance: Ksh "<<balance<<endl;
	cout << "==============================================================="<<endl;
	break;
		case 5:
		    if(ch == 5){
		    	exit(1);
			}
		default:
		{
				
			
		cout << "Invalid input!"<<endl;
}
}
	

		    
	
}
  guessCount++;
  
}while(ch =='y' || ch == 'Y');
}
void Bank::depositMoney(){
	cout << "Enter amount you want to deposit: "<<endl;
	cin >>a;
	balance += a;
	cout << "==============================================================="<<endl;
	cout << "Total amount after deposit: Ksh "<<balance<<endl;
	cout << "==============================================================="<<endl;
	
		   cout << ""<<endl;
	       cout << ""<<endl;
		    
		do{
			  cout << "Press Y to go back to main menu"<<endl;
	       cout << "Press N to exit"<<endl;
		    
	        ch = getch();
	      
		    if(ch =='y' || ch == 'Y'){
		    	 int ch;	
		    	
	cout << "==============================================================="<<endl;
	
	
	
	cout << "||           1) Open account                                 ||"<<endl;
	cout << "||           2) Deposit money                                ||"<<endl;
	cout << "||           3) Withdraw money                               ||"<<endl;
	cout << "||           4) Display Account                              ||"<<endl;
	cout << "||           5) Exit                                         ||"<<endl;
	cout << "|| Select from the above options                             ||"<<endl;
	cout << "==============================================================="<<endl;
	cin >> ch;
	
	switch(ch){
		case 1:
	
	cout << "Enter your full name: "<<endl;
	cin.ignore();
	getline(cin, name);
	cout << "Enter your address (starting with(-)): "<<endl;
	cin.ignore();
	cin >>add;
	cout << "What type of account do you want. Saving(s) or Current(c): "<<endl;
	cin >>y;
	if(y == "c" || y == "c"){
		cout << ""<<y<<endl;
	}else{
		cout << "Reply with 's' or 'c'"<<endl;
	}
	cout << "Deposit some amount to activate your account: Ksh "<<endl;
	cin >>balance;
	cout << "Your account has been successful been activated."<<endl;
	cout << "==============================================================="<<endl;
		break;
		
	    case 2:
	cout << "Enter amount you want to deposit: "<<endl;
	cin >>a;
	balance += a;
	cout << "Balance: Ksh "<<balance<<endl;
	cout << "==============================================================="<<endl;
	        break;
	        
		case 3:
			cout << "Enter amount you want to withdraw: "<<endl;
	cin >> amount;
	balance -= amount;
	cout << "Balance : Ksh "<<balance<<endl;
	cout << "==============================================================="<<endl;
	 cout << "Press Y to go back to main menu"<<endl;
	 cout << "Press N to exit"<<endl;
	 break;
	 
	 case 4:
	cout << "==============================================================="<<endl;
	cout << "Name: "<<name<<endl;
	cout << "Address: "<<add<<endl;
	cout << "Account type: "<<y<<endl;
	cout << "Balance: Ksh "<<balance<<endl;
	cout << "==============================================================="<<endl;
	break;
		
		case 5:
		    if(ch == 5){
		    	exit(1);
			}
		default:
		{
				
			
		cout << "Invalid input!"<<endl;
}
}
	guessCount++;
}
	
}while(ch =='y' || ch == 'Y');
}
void Bank::displayAccount(){
	cout << "==============================================================="<<endl;
	cout << "Name: "<<name<<endl;
	cout << "Address: "<<add<<endl;
	cout << "Account type: "<<y<<endl;
	cout << "Balance: Ksh "<<balance<<endl;
	cout << "==============================================================="<<endl;
		cout << ""<<endl;
	       cout << ""<<endl;

		    
		    
		do{
			 cout << "Press Y to go back to main menu"<<endl;
	       cout << "Press N to exit"<<endl;
		    
	        ch = getch();
	       
		    if(ch == 'y' || ch == 'Y'){
		    int ch;	
	cout << "==============================================================="<<endl;	    	
	cout << "1) Open account"<<endl;
	cout << "2) Deposit money"<<endl;
	cout << "3) Withdraw money"<<endl;
	cout << "4) Display Account"<<endl;
	cout << "5) Exit"<<endl;
	cout << "Select from the above options"<<endl;
	cout << "==============================================================="<<endl;
	cin >>ch;
	
	switch(ch){
		case 1:
	
	cout << "Enter your full name: "<<endl;
	cin.ignore();
	getline(cin, name);
	cout << "Enter your address (starting with(-)): "<<endl;
	cin.ignore();
	cin >>add;
	cout << "What type of account do you want. Saving(s) or Current(c): "<<endl;
	cin >>y;
	cout << "Deposit some amount to activate your account: Ksh "<<endl;
	cin >>balance;
	cout << "Your account has successful been activated"<<endl;
	cout << "==============================================================="<<endl;
		break;
		
	    case 2:
	cout << "Enter amount you want to deposit: "<<endl;
	cin >>a;
	balance += a;
	cout << "Balance: Ksh "<<balance<<endl;
	cout << "==============================================================="<<endl;
	        break;
	        
		case 3:
			cout << "Enter amount you want to withdraw: "<<endl;
	cin >> amount;
	balance -= amount;
	cout << "Balance: Ksh "<<balance<<endl;
	cout << "==============================================================="<<endl;
	 cout << "Press Y to go back to main menu"<<endl;
	 cout << "Press N to exit"<<endl;
	 break;
	 
	 case 4:
	cout << "==============================================================="<<endl;
	cout << "Name: "<<name<<endl;
	cout << "Address: "<<add<<endl;
	cout << "Account type: "<<y<<endl;
	cout << "Balance: Ksh "<<balance<<endl;
	cout << "==============================================================="<<endl;
	break;
		case 5:
		    if(ch == 5){
		    	exit(1);
			}
		default:
		{
				
			
		cout << "Invalid input!"<<endl;
}
}
	guessCount++;
}
}while(ch =='y' || ch == 'Y');
}
void Bank::withdrawMoney(){
	cout << "Enter amount you want to withdraw: "<<endl;
	cin >> amount;
	balance -= amount;
	cout << "Balance: Ksh "<<balance<<endl;
	cout << "==============================================================="<<endl; 
	 cout << ""<<endl;
	       cout << ""<<endl;
		    
		    
		do{
			cout << "Press Y to go back to main menu"<<endl;
	       cout << "Press N to exit"<<endl;
		    
	        ch = getch();
	        
		    if(ch == 'y' || ch == 'Y'){
		    int ch;	
		    	
	cout << "==============================================================="<<endl;
	
	
	
	cout << "||           1) Open account                                 ||"<<endl;
	cout << "||           2) Deposit money                                ||"<<endl;
	cout << "||           3) Withdraw money                               ||"<<endl;
	cout << "||           4) Display Account                              ||"<<endl;
	cout << "||           5) Exit                                         ||"<<endl;
	cout << "|| Select from the above options                             ||"<<endl;
	cout << "==============================================================="<<endl;
	cin >> ch;
	
	switch(ch){
		case 1:
	
	cout << "Enter your full name: "<<endl;
	cin.ignore();
	getline(cin, name);
	cout << "Enter your address (starting with(-)): "<<endl;
	cin.ignore();
	cin >>add;
	cout << "What type of account do you want. Saving(s) or Current(c): "<<endl;
	cin >>y;
	if(y == "c" || y == "s"){
		cout << ""<<y<<endl;
	}else{
		cout << "Reply with 's' or 'c'"<<endl;
	}
	cout << "Deposit some amount to activate your account: Ksh "<<endl;
	cin >>balance;
	cout << "Your account has successful been activated"<<endl;
	cout << "==============================================================="<<endl;
		break;
		
	    case 2:
	cout << "Enter amount you want to deposit: "<<endl;
	cin >>a;
	balance += a;
	cout << "Balance: Ksh "<<balance<<endl;
	cout << "==============================================================="<<endl;
	        break;
	        
		case 3:
			cout << "Enter amount you want to withdraw: "<<endl;
	cin >> amount;
	balance -= amount;
	cout << "Balance: Ksh "<<balance<<endl;
	cout << "==============================================================="<<endl;
	 cout << "Press Y to go back to main menu"<<endl;
	 cout << "Press N to exit"<<endl;
	 break;
	 
	 case 4:
	cout << "==============================================================="<<endl;	
	cout << "Name: "<<name<<endl;
	cout << "Address: "<<add<<endl;
	cout << "Account type: "<<y<<endl;
	cout << "Deposited amount: Ksh "<<balance<<endl;
	cout << "==============================================================="<<endl;
	break;
		case 5:
		    if(ch == 5){
		    	exit(1);
			}
		default:
		{
				
			
		cout << "Invalid input!"<<endl;
}
}
	guessCount++;
		
}
}while(ch =='y' || ch == 'Y');
}

int main(){
	
	int ch;
	Bank obj;
	
	do{
	cout << "==============================================================="<<endl;
	cout << "|| Welcome to KCB mobile banking                             ||"<<endl;
	
	cout << "||           1) Open account                                 ||"<<endl;
	cout << "||           2) Deposit money                                ||"<<endl;
	cout << "||           3) Withdraw money                               ||"<<endl;
	cout << "||           4) Display Account                              ||"<<endl;
	cout << "||           5) Exit                                         ||"<<endl;
	cout << "|| Select from the above options                             ||"<<endl;
	cout << "==============================================================="<<endl;
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
		    obj.openAccount();
			obj.displayAccount();
			break;
		case 5:
		    if(ch == 5){
		    	exit(1);
			}
		default:
		{
				
			
		cout << "Invalid input!"<<endl;
	    
		   do{
		   cout << "Press Y to go back to main menu"<<endl;
		    cout << "Press N to exit"<<endl;
		ch=getch();    
		if(ch == 'y' || ch == 'Y'){
			cout << "1) Open account"<<endl;
	cout << "2) Deposit money"<<endl;
	cout << "3) Withdraw money"<<endl;
	cout << "4) Display Account"<<endl;
	cout << "5) Exit"<<endl;
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
		    obj.openAccount();
			obj.displayAccount();
			break;
		case 5:
		    if(ch == 5){
		    	exit(1);
			}
		default:
				
		cout << "Invalid input!"<<endl;
    }
    	
	
  
	
   }
   
  
}while(ch != 1 || ch != 2 || ch != 3 || ch != 4 || ch != 5);

}
 
  
 
 
 
 
}

}while(ch == 'y' || ch == 'Y');

  getch();
}

	
	

	


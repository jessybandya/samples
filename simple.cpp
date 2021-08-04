#include<iostream>
using namespace std;
class Assino{
	int ch;
	float A=157+200+147+221+111;
		   float B=203+119+199+171+387;
		   float C=57+103+117+171+181;
		   float D=315+215+118+117+281;
		   float a=A/(A+B+C+D) *100;
		   float b=B/(A+B+C+D) *100;
		   float c=C/(A+B+C+D) *100;
		   float d=D/(A+B+C+D) *100;
	public:
		void mainMenu();
		void assin1();
		void assin2();
};
void Assino::mainMenu(){
	cout<<"Main Menu\n"<<endl;
	cout<<"1) Assigment 1"<<endl;
	cout<<"2) Assigment 2"<<endl;
	cout<<"3) Assignment 3"<<endl;
	cout<<"4) Exit"<<endl;
	cin>>ch;
	switch(ch){
		case 1:
			assin1();
			break;
		case 2:
		   	assin2();
		   	break;
		case 3:
		    break;
		case 4:
		  cout<<"Successful exit the program"<<endl;
		  exit(0);
		  break;
		  default:
		  cout<<"Invalid input!\n------------------------------------"<<endl;
		  do{
		  	mainMenu();
		  }while(ch>4||ch<1);	   	
	}
}
void Assino::assin1(){
	       
	cout<<"Assingment 1\n"<<endl;
	cout<<"1) question (a)"<<endl;
	cout<<"2) question (b)"<<endl;
	cout<<"3) question (c)"<<endl;
	cout<<"4) question (d)"<<endl;
	cout<<"5) question (e)"<<endl;
	cout<<"6) question (f)"<<endl;
	cout<<"7) Go back to the main menu"<<endl;
	cout<<"8) Exit"<<endl;
	cin>>ch;
	switch(ch){
		case 1:
			cout<<"Press 98 to go back the main menu page\nPress 0 to go back to the Assignment 1 page"<<endl;
		   cin>>ch;
		   if(ch==98){
		   	mainMenu();
		   }else if(ch==00){
		   	assin1();
		   }else{
		   	do{
		   	   cout<<"Invalid input!"<<endl;
				  cout<<"Press 98 to go back the main menu page"<<endl;
				  cout<<"Press 0 to go back to the Assignment 1 page"<<endl;
		          cin>>ch;
				  if(ch==98){
		   	mainMenu();
		   }else if(ch==00){
		   	assin1();
		   }	
			   }while(ch!=98||ch!=00);
			   
		   }
			break;
		case 2:
		   cout<<"-----------------------------------------------"<<endl;
		   cout<<"|          UNSA STUDENT ELECTION              |"<<endl;
		   cout<<"-----------------------------------------------"<<endl;
		   cout<<"|Campus Candidates    |   A  |  B | C  |  D   |"<<endl;	
		   cout<<"-----------------------------------------------"<<endl;
		   cout<<"|Main                 |      |    |    |      |"<<endl;
		   cout<<"-----------------------------------------------"<<endl;
		   cout<<"|Chiromo              |      |    |    |      |"<<endl;
		   cout<<"-----------------------------------------------"<<endl;
		   cout<<"|Kabete (L)           |      |    |    |      |"<<endl;
		   cout<<"-----------------------------------------------"<<endl;
		   cout<<"|Kabete (U)           |      |    |    |      |"<<endl;
		   cout<<"-----------------------------------------------"<<endl;
		   cout<<"|Parklands            |      |    |    |      |"<<endl;
		   cout<<"-----------------------------------------------"<<endl;
		   cout<<"\nPress 98 to go back the main menu page\nPress 0 to go back to the Assignment 1 page"<<endl;
		   cin>>ch;
		   if(ch==98){
		   	mainMenu();
		   }else if(ch==00){
		   	assin1();
		   }else{
		   	do{
		   	   cout<<"Invalid input!"<<endl;
				  cout<<"Press 98 to go back the main menu page"<<endl;
				  cout<<"Press 0 to go back to the Assignment 1 page"<<endl;
		          cin>>ch;
				  if(ch==98){
		   	mainMenu();
		   }else if(ch==00){
		   	assin1();
		   }	
			   }while(ch!=98||ch!=00);
			   
		   }
		   break;
		case 3:
		   cout<<"--------------------------------------------------------------------------"<<endl;
		   cout<<"|                         UNSA STUDENT ELECTION                          |"<<endl;
		   cout<<"--------------------------------------------------------------------------"<<endl;
		   cout<<"|Campus Candidates    |   A        |  B         | C          |  D        |"<<endl;	
		   cout<<"-------------------------------------------------------------------------"<<endl;
		   cout<<"|Main                 | 157        | 203         | 57        | 315       |"<<endl;
		   cout<<"-------------------------------------------------------------------------"<<endl;
		   cout<<"|Chiromo              | 200        | 119         |103        |215        |"<<endl;
		   cout<<"--------------------------------------------------------------------------"<<endl;
		   cout<<"|Kabete (L)           | 147        | 199         | 117      |  118       |"<<endl;
		   cout<<"--------------------------------------------------------------------------"<<endl;
		   cout<<"|Kabete (U)           | 221        | 171         | 171      | 117        |"<<endl;
		   cout<<"--------------------------------------------------------------------------"<<endl;
		   cout<<"|Parklands            | 111        | 387         | 181      | 281        |"<<endl;
		   cout<<"--------------------------------------------------------------------------"<<endl;
		   cout<<"|Total                |"<<A<<"         |"<<B<<"         |"<<C<<"       |"<<D<<"        |"<<endl;
		   cout<<"--------------------------------------------------------------------------"<<endl;
		   cout<<"|Percentage           |"<<a<<"%    |"<<b<<"%     |"<<c<<"%  |"<<d<<"%    |"<<endl;
		   cout<<"--------------------------------------------------------------------------"<<endl;
		   cout<<"\nPress 98 to go back the main menu page\nPress 0 to go back to the Assignment 1 page"<<endl;
		   cin>>ch;
		   if(ch==98){
		   	mainMenu();
		   }else if(ch==00){
		   	assin1();
		   }else{
		   	do{
		   	   cout<<"Invalid input!"<<endl;
				  cout<<"Press 98 to go back the main menu page"<<endl;
				  cout<<"Press 0 to go back to the Assignment 1 page"<<endl;
		          cin>>ch;
				  if(ch==98){
		   	mainMenu();
		   }else if(ch==00){
		   	assin1();
		   }	
			   }while(ch!=98||ch!=00);
			   
		   }
		   break; 
		case 4:
			if(a!=50||b!=50||c!=50||d!=50){
				cout<<"Neither of the candidates got over 50% of the votes"<<endl;
			}else{
		    if(a>b && a>c && a>d){
		    	cout<<"A is the winner with "<<a<<"% of the votes"<<endl;
			}else if(b>a && b>c &&b>d){
				cout<<"B is the winner with "<<b<<"% of the votes"<<endl;
			}else if(c>a && c>b && c>d){
				cout<<"C is the winner with "<<c<<"% of the votes"<<endl;
			}else{
				cout<<"D is the winner with "<<d<<"% of the votes"<<endl;
			}  
	}
	cout<<"\n\nPress 98 to go back the main menu page\nPress 0 to go back to the Assignment 1 page"<<endl;
		   cin>>ch;
		   if(ch==98){
		   	mainMenu();
		   }else if(ch==00){
		   	assin1();
		   }else{
		   	do{
		   	   cout<<"Invalid input!"<<endl;
				  cout<<"Press 98 to go back the main menu page"<<endl;
				  cout<<"Press 0 to go back to the Assignment 1 page"<<endl;
		          cin>>ch;
				  if(ch==98){
		   	mainMenu();
		   }else if(ch==00){
		   	assin1();
		   }	
			   }while(ch!=98||ch!=00);
			   
		   }
	break;
	case 5:
		  if(a!=50||b!=50||c!=50||d!=50){
				cout<<"Neither of the candidates got over 50% of the votes"<<endl;
			}else{
		    if(a>b && a>c && a>d){
		    	cout<<"A is the winner with "<<a<<"% of the votes"<<endl;
			}else if(b>a && b>c &&b>d){
				cout<<"B is the winner with "<<b<<"% of the votes"<<endl;
			}else if(c>a && c>b && c>d){
				cout<<"C is the winner with "<<c<<"% of the votes"<<endl;
			}else{
				cout<<"D is the winner with "<<d<<"% of the votes"<<endl;
			}  
	}
	cout<<"\n\nPress 98 to go back the main menu page\nPress 0 to go back to the Assignment 1 page"<<endl;
		   cin>>ch;
		   if(ch==98){
		   	mainMenu();
		   }else if(ch==00){
		   	assin1();
		   }else{
		   	do{
		   	   cout<<"Invalid input!"<<endl;
				  cout<<"Press 98 to go back the main menu page"<<endl;
				  cout<<"Press 0 to go back to the Assignment 1 page"<<endl;
		          cin>>ch;
				  if(ch==98){
		   	mainMenu();
		   }else if(ch==00){
		   	assin1();
		   }	
			   }while(ch!=98||ch!=00);
			   
		   }
	break;
	   case 6:
	   	   if(a>27 || b>27){
	   	   	cout<<"A has "<<a<<"% of the votes, among the highest number of votes\nB has "<<b<<"% of the votes, among the highest number of votes"<<endl;
			  }else if(b>27|| c>27){
	   	   	cout<<"B has "<<b<<"% of the votes, among the highest number of votes\nC has "<<c<<"% of the votes, among the highest number of votes"<<endl;
			  }else if(c>27||d>27){
	   	   	cout<<"C has "<<c<<"% of the votes, among the highest number of votes\nD has "<<d<<"% of the votes, among the highest number of votes"<<endl;
			  }else if(a>27||c>27){
	   	   	cout<<"A has "<<a<<"% of the votes, among the highest number of votes\nC has "<<c<<"% of the votes, among the highest number of votes"<<endl;
			  }else if(a>27||d>27){
	   	   	cout<<"A has "<<a<<"% of the votes, among the highest number of votes\nD has "<<d<<"% of the votes, among the highest number of votes"<<endl;
			  }else if(b>27||d>27){
	   	   	cout<<"B has "<<b<<"% of the votes, among the highest number of votes\nD has "<<d<<"% of the votes, among the highest number of votes"<<endl;
			  }
			  cout<<"\n\nPress 98 to go back the main menu page\nPress 0 to go back to the Assignment 1 page"<<endl;
		   cin>>ch;
		   if(ch==98){
		   	mainMenu();
		   }else if(ch==00){
		   	assin1();
		   }else{
		   	do{
		   	   cout<<"Invalid input!"<<endl;
				  cout<<"Press 98 to go back the main menu page"<<endl;
				  cout<<"Press 0 to go back to the Assignment 1 page"<<endl;
		          cin>>ch;
				  if(ch==98){
		   	mainMenu();
		   }else if(ch==00){
		   	assin1();
		   }	
			   }while(ch!=98||ch!=00);
			   
		   }
		   break;
		case 7:
			mainMenu();
			break;
		case 8:
		  cout<<"Successful exit the program"<<endl;
		  exit(0);
		  break;
	   default:
	       cout<<"Invalid input!\n--------------------------------------"<<endl;
		   do{
		   	assin1();
		   }while(ch>8||ch<1);	  	
	}
}
void Assino::assin2(){
	cout<<"Converted from cpp to cpp\n"<<endl;
	assin1();
}
class Car{
	public:
	void jessy(){
		cout<<"Hi Jaby"<<endl;
	}
};
class Veh: public Car{
};
int main(){
	Veh je;
	je.jessy();
}

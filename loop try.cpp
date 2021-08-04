#include <iostream>
using namespace std;

class Bank{
	int ch;
	int x=1;
	public:
		void account();
};
void Bank::account(){
	do{
	try{
		cin>>ch;
	cout<<"1) Press one"<<endl;
	cin>>ch;
	x=2;
	switch(ch){
		case 1:
			cout<<"Nice"<<endl;
		default:
		  cout<<"Invalid Input!"<<endl;
		  do{
		  	account();
		  }while(ch!=1);
		  x=2;	
	}
}catch(...){
	cout<<"Invalid input"<<endl;
}
}while(x==1);
}
int main(){
	Bank je;
	je.account();
}

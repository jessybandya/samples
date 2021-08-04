#include <iostream>
using namespace std;


int main(){
 string password="Jessy";
 string attempt;
 bool error=false;
 int attemptLimit=2;
 int count=0;
 cout<<"Enter Password: "<<endl;
 		cin>>attempt;	
 while(attempt!=password&&!error){
 	if(count<attemptLimit){
 		cout<<"Invalid Password!"<<endl;
 		cout<<"You are left with Two attempts"<<endl;
 		cout<<"Enter Password: "<<endl;
 		cin>>attempt;
 		count++;
	 }else{
	 	error=true;
	 }
 }
 if(error=true){
 	cout<<"You are out of Attempts! Try another time"<<endl;
 }else{
 	cout<<"You got it "<<endl;
 }
}

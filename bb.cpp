#include <iostream>
using namespace std;


int main(){
 string password="Jessy";
 string attempt;
 bool error=false;
 int attemptLimit=3;
 int count=0;
 while(attempt!=password&&!error){
 	if(count<attemptLimit){
 		cout<<"Enter Password: "<<endl;
 		cin>>attempt;
 		count++;
 		if(attempt==password){
 			cout<<"You got it"<<endl;
		 }else{
		 	do{
		 	cout<<"Invalid password!"<<endl;
		 	cout<<"Enter Password: "<<endl;
 		    cin>>attempt;
		 }while(attempt!=password);
		 }
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

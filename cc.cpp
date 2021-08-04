#include <iostream>
using namespace std;


int main(){
 string a="Jessy";
 string b;
 cout<<"Enter Password: "<<endl;
 cin>>b;
 if(a!=b){
 	cout<<"Invalid Password!"<<endl;
 	cout<<"Left with 2 attempts"<<endl;
 	cout<<"----------------------"<<endl;
 	cout<<"Enter Password: "<<endl;
    cin>>b;
    if(a!=b){
 	cout<<"Invalid Password!"<<endl;
 	cout<<"Left with 1 attempts"<<endl;
 	cout<<"----------------------"<<endl;
 	cout<<"Enter Password: "<<endl;
    cin>>b;
    if(a!=b){
 	cout<<"Out of attempts! Try another time!"<<endl;
 }else{
 	cout<<"You got it"<<endl;
 }
 }else{
 	cout<<"You got it"<<endl;
 }
 }else{
 	cout<<"You got it"<<endl;
 }
}

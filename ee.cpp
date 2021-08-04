#include <iostream>
#include<fstream>
using namespace std;
int main(){
	int num;
	ofstream Jessy("dd.txt");
	cout<<"Enter a Number: "<<endl;
	cin>>num;
	Jessy<<"Num is: "<<num<<endl;
}

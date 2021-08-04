#include <stdio.h>
#include <stdlib.h>

int main(){
	//Getting user input
	char phrase[20];
	int age;
	printf("Enter a phrase: ");
	fgets(phrase, 20, stdin);
	printf("Enter your age: ");
	scanf("%d", &age);
	printf("\nYour phrase is %s\nYou are %d years old.", phrase,age);
}

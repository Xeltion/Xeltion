/* BASICS OF POINTERS */
#include<stdio.h>

void main(){
	int 			Num;
	int 			*pNum = &Num;
	char 			Name[30];
	char 			*pName = &Name[30];
	const double 		Pi = 3.14;
	const double 		*pPi = &Pi;
	
	/* Input from the USER */
	puts("Enter a Number : ");
	scanf("%d", &Num);
	printf("Enter your Name: ");
	scanf("%s", &Name);
	
	/* Output */
	printf("\nHere's The Memory Adress of the following Data: \n");
	printf("1. Number = %p\n", pNum);
	printf("2. Name = %p\n", pName);
	printf("3. Constant Pi = %p", pPi);
}

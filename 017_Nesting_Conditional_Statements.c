/* Nesting Conditional Operators 
*--------------------------------------------------------------------------------
*
* Male --> Above 20
* Female --> Above 21
*
*--------------------------------------------------------------------------------
*/ 

#include <stdio.h>

void main(){
	int 		sex, Age;
	
	printf("What is your Gender? \n1.MALE \n2.FEMALE \n\n");
	scanf("%d", &sex);
	printf("How old are you? \n\n");
	scanf("%d", &Age);
	
	/* Nesting Statements within Statements */ 
	((sex==1) ? ((Age >= 20) ? printf("ELIGIBLE!") : printf("Not Eligiblie...")) : (Age >= 21) ? printf("ELIGIBLE!") : printf("Not Eligiblie..."));
}

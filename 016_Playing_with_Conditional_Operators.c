/* PLAYING AROUND WITH CONDITIONAL OPERATOR 
*
*  --Reduced Form of If-else Statements--
*
*/

#include <stdio.h>

void main(){
	/*
	int			Var_A = 10;
	( Var_A <5 ? printf("Number is less than 5.") : printf("Number is Greater than 5."));
	*/
	
	double			Attendence;
	printf("Enter your Attendence(%): \n");
	scanf("%lf", &Attendence);
	(Attendence >= 70 ? printf("YOU ARE ELIGIBLE FOR THE FINAL EXAM!") : printf("You are NOT eligible to take the FINAL EXAM..."));
}

/*  JOB ELIGIBILITY
*--------------------------------------------------------------------------------------------
*	Select Candidates as Required -->
*
*	Male _ 3 Years of Experience
*			  OR
*	Female _ 2 Years of Experience
*--------------------------------------------------------------------------------------------
*/ 

#include <stdio.h>

int main(){
	int			sex, Ex;
	printf("What is your Gender? \n1.Male \n2.Female \n\n");
	scanf("%d", &sex);
	printf("How many years of experience do you have?\n");
	scanf("%d", &Ex);
	
	if((sex==1) && (Ex >= 3) || (sex==2) && (Ex >= 2)){
			printf("\nCandidate is eligible for the job!");
	}else{
		printf("\nCandidate is NOT ELIGIBLE.");
	}
	return 0;
}

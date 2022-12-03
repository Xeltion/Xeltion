/* Days --> Months */

#include <stdio.h>

int main(){
	int 		No_of_Days, Months, Days;
	printf("Enter the number of days: \n");
	scanf("%d", &No_of_Days);
	
	Months = No_of_Days / 30;
	Days = No_of_Days % Months;
	
	printf("Months: [%d], Days: [%d]", Months, Days);
	return 0;
}

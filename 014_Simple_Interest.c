/*   

Simple Interest Rates :-

5% for Principle Amount( 0 - 10,000 )
10% for Principle Amount( 10,000 - 20,000 )
15% for Principle Amount( 20,000 - ABOVE )

*/

#include <stdio.h>

/* SI = P*(R/100)*T */
int main(){
	int 			Principle, Time;
	float 			Rate;
	
	printf("Enter the Time of the Contract: \n");
	scanf("%d", &Time);
	printf("Enter the Principle Amount: \n");
	scanf("%d", &Principle);
	if(Principle > 10000){
		if(Principle > 20000){
			Rate = 15;
			printf("\nSimple Interest: [%.2f]", 	Principle*Time*(Rate/100));
		}else{
			Rate = 10;
			printf("\nSimple Interest: [%.2f]", 	Principle*Time*(Rate/100));
		}
	}else{
		Rate = 5;
		printf("\nSimple Interest: [%.2f]", 	Principle*Time*(Rate/100));
	}
	return 0;
}

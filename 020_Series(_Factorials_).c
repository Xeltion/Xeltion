/*  Factorials, Series of Factorials
*--------------------------------------------------------------------------------------
*
* OUTPUT--->
*
* CASE 1:
* Input = 6
* 6! = 6*5*4*3*2*1 = 720
*
* &&
*
* CASE 2:
* Input = 3
* 1! + 2! + 3! = 12
*
*--------------------------------------------------------------------------------------
*/

#include <stdio.h>

int main(){
	int 		Num,fact,i,j,ch,Sum; 
	printf("What do you want to do: \n1. Factorial \n2. Sum of Factorials\n\n");
	scanf("%d", &ch);
	switch(ch){
		
		case 1:
			fflush(stdin);
			fact = i = 1;
			printf("What do you want the Factorial of: ");
			scanf("%d", &Num);
			for(;i<=Num;i++){
				fact*=i;
			}
			printf("\nThe Required Factorial --> [%d]", fact); 
			break;
			
		case 2:
			fflush(stdin);
			j = i = fact = 1;
			Sum = 0;
			printf("How many terms should be included? : ");
			scanf("%d", &Num);
			for(;j<=Num;j++){
				for(;i<=j;i++){
					fact*=i;
				}
				Sum += fact;
			}
			printf("\n\nThe Required Series is: \n1! + 2! + ... + %d! = %d", Num, Sum);
			break;
			
		default:
			printf("Out of Options.\n\nTERMINATING PROGRAM.");
			break;
	}
	return 0;
}

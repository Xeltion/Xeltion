/* Switch_with_do-while  */ 

#include <stdio.h>

int main(){
	int 		op, Var_A, Var_B;	
	char		Ans;
	do{
		printf("Please put in the two values respectively\n");
		scanf("%d  %d", &Var_A, &Var_B);
		printf("What do you want to do? (1/2/3)\n");
		printf("1. Addition\n2. Subtraction\n3. Multiplication\n\n");
		scanf("%d", &op);
		
		switch(op){
			case 1:
				printf("The Required Answer: [%d]", Var_A + Var_B);
				break;
			case 2:
				printf("The Required Answer: [%d]", Var_A - Var_B);
				break;
			case 3:
				printf("The Required Answer: [%d]", Var_A * Var_B);
				break;
			default:
				printf("Out of Options.");
				goto end;		
		}
		end:
		fflush(stdin);
		printf("\n\nDo you want to try again? (Y/N) -- ");
		scanf("%c", &Ans);	
	}while(Ans == 'Y' || Ans == 'y');
	
	return 0;
}

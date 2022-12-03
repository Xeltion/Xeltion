/* Nested Switch */

#include <stdio.h>

float main(){
	
	int			ch;
	char		op;	
	
	printf("Please choose one of the following Numbers.\n1\n2\n3 \n\n");
	scanf("%d", &ch);
	
	switch(ch){
		case 1:
			printf("This is the 1st choice.");
			break;
		case 2:
			printf("This is the 2nd choice.");
			break;
		case 3:
			printf("\nPlease choose one of the following Options.\na\nb\nc \n\n");
			fflush(stdin);
			/* There is a problem here. */
			scanf("%c", &op);
			switch(op){
				case('a'):
					printf("\nThis is the First option.\n");
					break;
				case('b'):
					printf("\nThis is the Second option.\n");
					break;
				case('c'):
					printf("\nThis is the Third option.\n");
					break;
				default:
					printf("\nERROR");
					break;
			}
			break;
		default:
			printf("\nOUT OF ORDER");
			goto label;
	}
	label:
	return 2.7;
}

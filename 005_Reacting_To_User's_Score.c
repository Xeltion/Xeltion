/* TO COMMENT ON THE SCORES OF A STUDENT */
#include<stdio.h>

void main()
{
	char 		Grade;
	puts("What di you score in today's test? : \n");
	scanf("%c", &Grade);
	switch(Grade)
	{
		case 'A':
			printf("You did Excellent!!!");
			break;
		case 'B':
			printf("You did great!");
			break;
		case 'C':
			printf("You can do better.");
			break;
		case 'D':
			printf("Please prepare well for the next time.");
			break;
		case 'F':
			printf("You've failed the test.");
			break;
		default :
			printf("INVALID GRADE"):
			break:
	}	
}

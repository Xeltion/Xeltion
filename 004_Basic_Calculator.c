#include <stdio.h>
#include <math.h>

double 		num1, num2, LogValue, X1;
int 		L;
/*Functions That are to be Used. */

/* ADDING */
double Sum(double num1, double num2){
	return num1 + num2;
}

/* SUBTRACTING */
double Minus(double num1, double num2){
	if(num1 > num2){
		return num1 - num2;
	} else {
		return num2 - num1;
	}
}

/* MULTIPILCATION */
double Multiply(double num1, double num2){
	return num1*num2;
}

/* DIVISION */
double Divide(double num1, double num2){
	int 	x;
	printf("What do you want to divide? 1. n1/n2 OR 2. n2/n1 \n");
	scanf("%d", &x);
	if(x==1){
		if(num2==0){
			printf("UNDEFINED");
			return 0;
		} else {
			return num1/num2;
		}
	}
	if(x==2)
	{
		if(num1==0){
			printf("UNDEFINED");
			return 0;
		} else {
			return num2/num1;
		}
	}
	if(x!=1 and x!=2){
		printf("PLEASE SELECT ONE OF THE GIVEN OPTIONS :");
		return 0;
	}
}

/*
//Logarithm
double Log(double LogValue)
{
	printf("So, You've chosen to find logarithm of a number. Please choose the base : \n");
		printf("1. Natural log \n2. Base 10 \n\n");
		scanf("%d", &L);
		
		if(L==1)
		{
			X1 = log(LogValue);
			return X1;
		}
		if(L==2)
		{
			X1 = log10(LogValue);
			return X1;
		}
		if(L!=1 and L!=2)
		{
			printf("Please choose one of the options above...");
			return 0;
		}
}
*/

int main()
{
	int 	choice;
	printf("Choose one of the operation : \n");
	puts("1. Add\n");
	puts("2. Subtract\n");
	puts("3. Multiply\n");
	puts("4. Divide\n");
	puts("5. Logarithm\n");
	printf("----------------------------------------------------------------------------------------------------------------------\n\n");
	scanf("%d", &choice);
	
	switch(choice){
		case 1:
			scanf("%lf \n %lf", &num1, &num2);
			printf("Result : %.2f", Sum(num1,num2));
		case 2:
			scanf("%lf \n %lf", &num1, &num2);
			printf("Result : %.2f", Sum(num1,num2));
		case 3:
			scanf("%lf \n %lf", &num1, &num2);
			printf("Result : %.2f", Multiply(num1,num2));
		case 4:
			scanf("%lf \n %lf", &num1, &num2);
			printf("Result : %.2f", Divide(num1,num2));
		/*
		case 5:
			printf("Please put a value you want to evaluate :\n");
			scanf("%f", &LogValue);
			printf("Result : %.2f", Log(LogValue));
		*/
		default:
			printf("OUT OF BOUND\n");
			printf("ERROR");
	}
	return 0;
}

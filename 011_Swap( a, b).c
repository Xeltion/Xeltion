/*  Swapping of two Numbers simultaneously  */

#include <stdio.h>

void main(){
	int 		a, b;
	
	printf("Please Input any values for 'a' and 'b', respectively.\n");
	scanf("%d  %d", &a, &b);
	b = (a+b) - (a=b);
	printf("These are the required values --> a = [%d], b = [%d]", a, b);
}

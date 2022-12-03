/* LEAP YEAR */

#include <stdio.h>

void main(){
	int			Year, i=0;
	
	scanf("%d", &Year);
	if(Year%4 == 0){
		if(Year%100 != 0){
			printf("LEAP YEAR!!!");
			return i = 1;
		}
	}
	
	if(i==0){
		printf("NOT A LEAP YEAR.");
	}
}

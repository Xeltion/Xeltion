// print a series 1+2+3+4... upto n digits
#include<stdio.h>
int main(){
	int Num_of_terms,index = 0;
	int S = 0;
	printf("Please specify the number of terms you want to compute till :\n");
	scanf("%d", &Num_of_terms);
	while(index<Num_of_terms){
		//Numbers are added, but I don't want to show it everytime. I will print the final result outside this loop.
		index++;
		S = S+index;
	}
	printf("1 + 2 + 3 + 4 + ... + %d == %d", Num_of_terms, S);
	return 0;
}

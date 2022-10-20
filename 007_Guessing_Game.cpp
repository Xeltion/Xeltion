// Building a Guessing Game
#include<stdio.h>
int main(){
	int Secret_Num=62;
	int Guess;
	
	printf("WELCOME TO THE GUESSING GAME!!! \n\nThe Rules are simple, Guess the number to win!!! \n");
	printf("Choose a Number :\n");
	scanf("%d", &Guess);
	
	while(Guess!=Secret_Num){
		printf("TOO BAD!!! TRY AGAIN! \n");
		scanf("%d", &Guess);
	}
	if(Guess==Secret_Num){
		printf("CONGRATULATIONS!!! YOU WIN!!!");
	}
	return 0;
}

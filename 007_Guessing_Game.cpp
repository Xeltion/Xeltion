// Building a Guessing Game
#include<stdio.h>
int main(){
	int Secret_Num=62, GuessCount=1;
	int Guess;
	printf("WELCOME TO THE GUESSING GAME!!! \n\nThe Rules are simple, Guess the number to win!!! \n");
	printf("You have only 3 Lives, So think caefully about your number.\n");
	printf("Choose a Number :\n");
	scanf("%d", &Guess);
	
	while(Guess!=Secret_Num){
	printf("TOO BAD!!! TRY AGAIN! \n");
	GuessCount++;
	scanf("%d", &Guess);
	if(GuessCount==3){
		break;
	}
	}
	if(Guess==Secret_Num){
		printf("CONGRATULATIONS!!! YOU WIN!!!");
	} else {
		printf("YOUR LIVES HAS ENDED. YOU LOSE!\n");
	}
	return 0;
}

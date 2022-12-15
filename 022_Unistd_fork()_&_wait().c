/* Unistd LIBRARY --> Unix Based Library [[[ CALIING FORK() AND WAIT() ]]]
*-----------------------------------------------------------------------------------------------------------------
*
* Do 2 Processes side by side.
* Process 1 --> Print no. 1 to 5 on the child process.
* Process 2 --> Print no. 5 to 10 on the main process.
*
*			    /---------> CHILD PROCESS ( Id == 0 ) Do something here
* 			   /
*  -----------------------> MAIN PROCESS ( Id != 0 ) Do something here
*			    
* BOTH WILL BE EXECUTED SIMULTANEOUSLY; WE COULD USE wait() TO AVOID DISORDERING THE DATA
*
*-----------------------------------------------------------------------------------------------------------------
*
*/ 

#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]){						
	int Id = fork();								// Process line got separated ( Main + Child ), and it's Id is stored in a variable
	int i = 0, Num;
	
	if(Id != 0) wait();
	
	if(Id==0){
		Num = 0;
		for(i=0 ; i<Num+5 ; i++){
			printf("%d", i+1);
			fflush(stdout);
		} 
		printf("\n");
	}else{
		Num = 5;
		for(i=Num ; i<Num+5 ; i++){
			printf("%d", i+1);
			fflush(stdout);
		}
		printf("\n");
	}
	return 0;
}

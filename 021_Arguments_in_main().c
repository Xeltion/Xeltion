/* Passing arguments in Functions 
*----------------------------------------------------------------------------------------------------------------------------------------------------------
*		(ARG Count)
*		argc --> integer [ No. of arguments given ] / {{{ CAN NEVER BE LESS THAN 1 }}}
*
*		Arguments are stored in strings. STRINGS are important. [ All Strings are converted in integers, and stored in an array ]
*
*		(ARG Variables)
*		The Array which contain all the given arguments is:
* 		argv[] --> Array [  ] = { Argument 1, Argument 2, Argument 3, ...}
*		argv[2] == returns the interger value for the Argument within the argv[] that is stored at index 1, and then convert it into string and execute it.
*----------------------------------------------------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>

//  *argv[] is the value stored at argv[index]
int main(int argc, char *argv[]){
	int 	i;
	if(argc < 2){
		printf("\nToo few Parameters");
		return;
	}
	
	printf("\nNumber of arguments is [%d]", argc);
	for(i=0;i<argc;i++){
		printf("\nArguments passed: [%s]", argv[i]);
	}
	return 0;
} 

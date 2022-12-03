/* Global and Local Variables */
#include <stdio.h>

int			global_var=20;

int main(){
	int 		local_var=10;
	printf("\n Local Variable [%d]", local_var);
	printf("\n Global Variable [%d]", global_var);
	return 0;
}

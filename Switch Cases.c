#include <stdio.h>

int main(){
	
	printf("Enter a number 1-5.\n\n");
	
	int num;
	scanf("%d", &num);

//syntax of a switch statement
	switch(num){
		case 1:
			printf("You entered 1.\n");
	break;
		case 2:
			printf("You entered 2.\n");
	break;
		case 3:
			printf("You entered 3.\n");
	break;
		case 4:
			printf("You entered 4.\n");
	break;
		case 5:
			printf("You entered 5.\n");
	break;
		default:
			printf("You did not enter a number 1-5.\n");
	break;
	}

	
	return 0;
}

#include <stdio.h>
#include <stdlib.h> //required for the malloc,calloc, realloc and free functions
//Calloc


//For an int data type

int main(){
	int num,n;
	int *numbers;
	printf("Enter amount of numbers you want to enter:  ");
	scanf("%d", &num );
	numbers = (int *) calloc(num,sizeof(int));
	if(numbers == NULL){
		printf("Not enough memory... Terminating");
		return (1);
		}
	else{
		for (n=0; n<num;n++){
		printf("Enter each number you wish to store:  ");
		scanf("%d", &numbers[n]);
		}
		printf("You have entered: ");
		for (n=0;n<num;n++){
		printf("[%d] ", numbers[n]);
		}
		printf("\n");
		free (numbers);
		system ("pause");
	}
	return 0;
}

//And so on for other data types




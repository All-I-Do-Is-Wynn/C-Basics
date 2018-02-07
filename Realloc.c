#include <stdio.h>
#include <stdlib.h> //required for the malloc,calloc, realloc and free functions
//Realloc


//For an int data type

int main(){
	int n;
	int *pNum;
	pNum = (int *) malloc(5*sizeof(int));
	//pNum array is initialized as 5 values big.
	if(pNum != NULL){
		pNum[0] = 1;
		pNum[1] = 3;
		pNum[2] = 5;
		pNum[3] = 7;
		pNum[4] = 9;
	} 

	//Displays pNum with 5 values
	for(n=0;n<5;n++){
		printf("[%d] ", pNum[n]);
	}
	printf("\n");
	
	//reallocating to 7 values big
	pNum = (int*) realloc(pNum,7*sizeof(int)); 
	
	//Adding the 2 new array values
	if(pNum != NULL){
		printf("Adding memory...\n");
		pNum[5] = 11;
		pNum[6] = 13;
		
	//Displays new pNum array with 7 values
	for(n=0;n<7;n++){
		printf("[%d] ", pNum[n]);
	}
	printf("\n");
	free (pNum);
	system ("pause");
	}
	
	//If there isnt enough memory, this will terminate the program
	else{
		printf("Not enough memory... Terminating");
		return (1);
	}
	
	return 0;
}

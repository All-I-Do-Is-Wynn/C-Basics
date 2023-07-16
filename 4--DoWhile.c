#include <stdio.h>

//function declarations
void forloop(void);
void twoDarray(void);
void whileloop(void);

int main(){

	forloop();
	whileloop();
	
	return 0;
}

//Iterating For loop
void forloop(void){
	int i;
	printf("For loop.\n");
	for(i = 0;i < 3;i++){
		printf("The value of i is %d.\n",i);
	}

	//next function call from within the first function
	twoDarray();
}

void twoDarray(void){
	int i,j,pos = 0; //i represents the row counter, j represents the column counter
	printf("\nNested loop 2D array.\n");
	for(i = 0;i < 3; i++){
		for(j = 0;j < 3;j++){
			printf("%d ",pos);
			pos++; //increases position counter
		}
		printf("\n"); //enters the next row after each column is done
	}
}






//A while loop has to run the condition before the test so it may not run at all.
//A do while loop runs the test at least once, then checks the condition afterwards.
void whileloop(void){
	printf("\nFirst do-while.\n");
	int counter = 1;
	
	//syntax of a do while loop
	do{
		printf("%d ", counter);
		counter++;
	}while(counter<10);
	//Whilst less than 10 the counter will continue to increase and print itself.
	
	printf("\n\nSecond do-while.\n");
	//For this example the code will output 12, but will stop after because 12>10.
	//This is a better use of a do while loop.
	counter = 12;
	do{
		printf("%d ", counter);
		counter++;
	}while(counter<10);

	printf("\n\nWhile loop.\n");
	//The while loop will not print anything since it must run the condition first
	while(counter<10){
		printf("%d ", counter);}
}








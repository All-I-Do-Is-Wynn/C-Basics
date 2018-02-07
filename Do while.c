#include <stdio.h>

//A while loop has to run the condition before the test so it may not run at all.
//A do while loop runs the test at least once, then checks the condition afterwards.

int main(){
	printf("First do-while.");
	int counter = 1;
	
	//syntax of a do while loop
	do{
		printf("%d", counter);
		counter++;
	}while(counter<10);
	//Whilst less than 10 the counter will continue to increase and print itself.
	
	printf("Second do-while.");
	//For this example the code will output 12, but will stop after because 12>10.
	//This is a better use of a do while loop.
	int num = 12
	do{
		printf("%d", num);
		num++;
	}while(counter<10);
	
	
	return 0;
}

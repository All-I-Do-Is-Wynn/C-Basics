#include <stdio.h>
#include <stdlib.h>
//Goto function and error handling


void main(){
	
	int x=0;
	
	getData:
		printf("Enter a positive integer.\n");
		scanf("%d", &x);
	
	if(x<0){
	goto getData;
}
	else
	exit(EXIT_SUCCESS); //User error handling
}
	
//exit(EXIT_FAILURE); => manual error handling, noting a failure in the program

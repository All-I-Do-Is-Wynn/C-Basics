#include <stdio.h>
#include <stdlib.h> //required for the malloc,calloc, realloc and free functions
//Malloc - checking for allocation success


//For an int data type
void main(){

	int *number;
	number = (int *) malloc(80*sizeof(int));
		if(number == NULL){
			printf("Out of Memory\n");
		}
		
		else{
			printf("Memory allocated\n");
		}
}


/* For a character data type

void main(){
	
	char *name;
	name = (char *) malloc(80*sizeof(char));
	
		if(name == NULL){
			printf("\nOut of Memory\n");
		}
		else{
			printf("\nMemory allocated\n");
		}
  }
  
*/

//And so on for each data type

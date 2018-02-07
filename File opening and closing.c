#include <stdio.h>
#include <stdlib.h>
//File writing

void main(){
	char *name = "seemore nuts"; //Writes a string for the file
	int number = 98; //Writes an integer for a file
	FILE *pWrite;
	pWrite = fopen("jesus.txt", "w");

	if (pWrite != NULL){
	fprintf(pWrite, "%s\n[ %d ]\n\n",name,number);
	fclose (pWrite);
	}
	
	else{
		printf("The file could not be opened. ");
	}
}
//Now open the jesus.txt file to see the changes

/* This also works
void main(){

	FILE *pWrite;
	pWrite = fopen("jesus.txt", "w");

	if (pWrite != NULL){
		fprintf(pWrite, "I like candy lobsters");
		fclose (pWrite);
	}
	else{
		printf("The file could not be opened. ");
	}

	fclose (pWrite);
}
*/

#include <stdio.h>
#include <stdlib.h>
//File Reading

void main(){
	FILE *pFile;
	char name[15];
	char hobby[20];
	char c;
	pFile = fopen("hobbies.txt","w+");
	
	if(pFile ==NULL)
	printf("File wasnt opened. ");
	
	for (c = 'A'; c<= 'Z'; c++){
		fprintf(pFile, %c, c);
	}
	
	/*else{
		printf("\nName\tHobby\n\n");
		fscanf(pRead, "%s%s", name, hobby);
	}
	while(!feof(pRead)){
		printf("%s\t%s\n", name, hobby);
		fscanf(pRead, "%s%s", name, hobby);
	}*/
	fclose(pFile);
}

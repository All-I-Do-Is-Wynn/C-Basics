#include <stdio.h>
#include <string.h>

int main(){
	
	char movie1[] = "Divergence"; //array of characters
	char * movie2 = "Goosebumps"; //pointer to char array
	char movie3[] = "Paranormal"; //pointer to char array
	
	puts(movie1);
	puts(movie2);
	
	movie2 = "Limitless"; //directly changes the value of movie2
	puts(movie2);

	strcpy(movie1,movie3); //copies the string in movie3 to movie1
	puts(movie1);
	
	strcat(movie1,movie3); //concatenates movie3 to the end of movie1
	puts(movie1);
	
	//alphabetically
	int isequal = strcmp(movie1,movie3); //compares the string; =0 if strings are equal; <0 if movie1 is less than movie2; >0 if movie1 is greater than movie3
	if (isequal == 0){printf("The two movies are the same.");}
	else if (isequal == 0){printf("Movie1 is less than movie2.");}
	else {printf("Movie1 is more than movie2.");}	
	
	return 0;
}

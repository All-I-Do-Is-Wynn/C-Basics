#include <stdio.h>

//If and If Else statement usage
main(){
	//local variables
	int age,m,f; 
	char gender;
	
	//Prerequisite question
	printf("How old are you?  \n");
	scanf("%d", &age); //Save the age to compare against the next condition

	//Initial condition to enter website
	if(age>=18){
		printf("\nYou may enter.\n");
		printf("What gender are you, m/f/etc?  \n"); //Male, Female, or other identification
		scanf(" %c", &gender); //Save the gender to compare against the next condition
		if(gender=='m'){
			printf("\nWelcome to the website sir.\n"); //Male response
		}
		else if(gender=='f'){
			printf("\nWelcome to the website ma'am.\n"); //Female response
		}
		else {
			printf("\nWelcome to the website.\n"); //Gender neutral response
		}
	}
	//Default invalid statment for underage personel
	else{
		printf("You need an adults permission to enter.");
	}
	
	return 0;
}


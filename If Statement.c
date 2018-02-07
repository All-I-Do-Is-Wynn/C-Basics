#include <stdio.h>

main(){
	int age,m,f;
	char gender;
	
	printf("How old are you?  \n");
	scanf("%d", &age);
	printf("What gender are you, m/f?  \n");
	scanf(" %c", &gender);

	if(age>=18){
		printf("\nYou may enter.\n");
		
		if(gender=='m'){
			printf("\nWelcome to the website sir.\n");
		}
		if(gender=='f'){
			printf("\nWelcome to the website ma'am.\n");
		}
	}
	
	else{
		printf("You need an adults permission to enter.");
	}
	
	return 0;
}


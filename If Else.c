#include <stdio.h>
#include <stdlib.h>
int main(){
	
	float grade1,grade2,grade3;
	
	printf("Enter your 3 test grades:\n");
	scanf(" %f", &grade1);
	scanf(" %f", &grade2);
	scanf(" %f", &grade3);
	
	float avg = (grade1 +grade2 +grade3) /3;
	
	if(avg>=90&&avg<=100){
		printf("Grade: A");
	}
	else if(avg>100){
		printf("You enter too high grades.");
	}
	else if(avg>=80 && avg<90){
		printf("Grade: B");
	}
	else if(avg>=70 && avg<80){
		printf("Grade: C");
	}
	else if(avg>=60 && avg<70){
		printf("Grade: D");
	}
	else{
		printf("You failed.");
	}
	
	
	
	return 0;
}

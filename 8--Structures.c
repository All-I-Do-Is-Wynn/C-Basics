#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//struct creation
struct profile{
	int userid;
	int age;
	char *firstname;
	char lastname[25];
	float weight;
};

int main(){
	
	struct profile austin;
	struct profile jeff;
	
	austin.userid = 1;
	jeff.userid = 2;
	jeff.firstname = "jeff";
	
	//obtain the users name
	puts("What is your firstname?");
	gets(austin.firstname);
	
	//compare the struct names
	if(strcmp(austin.firstname,jeff.firstname)==0){printf("Hi %s, you and your peer have the same name.",austin.firstname,jeff.firstname);}
	else{
		printf("Hi %s, your peers name is %s.",austin.firstname,jeff.firstname);
	}
	return 0;
}

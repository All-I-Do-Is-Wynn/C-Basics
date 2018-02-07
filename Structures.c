#include <stdio.h>
#include <stdlib.h>

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
	
	puts("What is your firstname?");
	gets(austin.firstname);
	
	printf(austin.firstname);
	return 0;
}

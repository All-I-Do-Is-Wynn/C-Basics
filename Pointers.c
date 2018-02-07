#include <stdio.h>

int main(){
	
	int a=8;
	int b=10;
	float c=5.8;
	
	int *p1=&a; //p1 stores the address of a
	int *p2=&b; //p2 stores the address of b
	float *p3=&c; // p3 stores the address of c

	//address and pointers for a
	printf("The address of a is %p.\n", &a);
	printf("Using a pointer the address of a is %p.\n", p1); // this is for the address of a
	// Dereferencing p1
	printf("By dereferencing the pointer, a = %d.\n\n", *p1); // the * indicates the actual value

	//address and pointers for b
	printf("The address of b is %p.\n", &b);
	printf("Using a pointer the address of b is %p.\n", p2); // this is for the address of a
	printf("By dereferencing the pointer, b = %d.\n\n", *p2);
	
	//address and pointers for c
	printf("The address of c is %p.\n", &c);
	printf("Using a pointer the address of c is %p.\n", p3); // this is for the address of a
	printf("By dereferencing the pointer, c = %f.\n\n", *p3);
	
	//addition of pointers
	printf("The sum of a and b is %d.\n\n", *p1+*p2);
	
	p1=p2; //the address of p1 is now equal to the address of p2
	printf("The address of p1 after switching to p2 is now %p.\n\n", p1);
	

	//pointer array
	int meatballs[5] = {4,53,7,89,54};
	
	printf("\n*(meatballs+2) \t %d.", *(meatballs+2));



















	return 0;
}

#include <stdio.h>
#include <stdlib.h>

void main(){
	
	int array[10];
	
	printf("Size of array: %d bytes \n", sizeof(array));
	printf("Number of elements in array: ");
	printf("%d\n", sizeof(array)/sizeof(int));
	system ("pause");
	
}

/*
	The output is:
	Size of array: 40 bytes
	Number of elements in array: 10
	
	int = 4 bytes
	# of array elements = 10
	total bytes => 4*10 = 40
*/

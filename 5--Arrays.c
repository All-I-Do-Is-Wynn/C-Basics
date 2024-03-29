#include <stdio.h>

int main(){

	/*
	assigning values, *array starts 0
	*/
	
	/*one way to do this is:
	int array[5];
	array[0]=17; , array[1]=20; , etc.
	*/
	
	//a better way
	int array[5]={21,13,435,56,7};
	
	printf("The value of array[3] = %d.\n", array[3]);
	
	//can also have arrays with no specific number of values
	int array_2[]={21,13,45,56,7,98,80,46,3,12};

	printf("\nThe value of array_2[6] = %d.\n\n", array_2[6]);
	
	//sum of the array_2
	int i;
	int total=0;
	
	//adds up all of the values of the arrays
	for(i=0;i<10;i++){
		total += array_2[i];
	}
	printf("Total of array_2 = %d.\n\n", total);
	
	
	//printing the entire array
	printf("array_2 = ");
	for(i=0;i<10;i++){
		printf("[%d]", array_2[i]);
	}
	
	//array of characters
	char array_3[] = "af;ergh)afge";
	char * array_4 = "New array"; //pointer to character array

	printf("\n\nArray_3 values 3 and 8: %c%c\n",array_3[2],array_3[7]); //print the 3rd and 8th element in array_3 

	puts(array_4); //print the value at the address of the pointer
	
	return 0;
}

#include <stdio.h>

//assigning values in arrays
int main(){

	/*
	array [0][1][2][3]...
	*/
	
	/*
	assigning values in arrays
	int array[5];
	array[0]=17;
	array[1]=20;
	etc...
	*/
	
	//a faster way of making arrays
	int array[5]={21,13,435,56,7};
	
	printf("The value of array[3] = %d.\n", array[3]);
	
	//can also have arrays with no specific number of values
	int array_2[]={21,13,45,56,7,98,80,46,3,12};

	printf("\nThe value of array2[6] = %d.\n\n", array_2[6]);
	
	//sum of array_2
	int i;
	int total=0;
	
	//adds up all of the values of array_2
	for(i=0;i<10;i++){
		total += array_2[i];
	};
	printf("Total of array_2 = %d.\n\n", total);
	
	
	//printing the entire array_2
	printf("array_2 = ");
	for(i=0;i<10;i++){
		printf("[%d]", array_2[i]);
	};
	
	
	
	
	return 0;
}

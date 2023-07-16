#include <stdio.h>

//Global Variables
char letter = 'a';
static float pi = 3.1415; //static value; scope is restricted to this file; float has precision of 6 decimal places
static int count = 3; //static value; only one copy is shared by all objects of this class

//Decrement
void dec(void){
    static int num = 10; //local static variable
    num--;
    printf("Num = %d. Count = %d.\n",num,count);
}

//Main
void main(){
    double dub = 5.7014367116; //double value; double has precision of 15 decimal places

    //Decrement the counter, print the result
    while(count--){
        dec();
        }

    printf("Dub = %.10f. Pi = %f.\n",dub,pi); //double with 10 significant figures after the decimal
    pi = pi + dub; //adding the double to the float
    printf("Letter = %c. Pi = %f.\n",letter,pi); //float still has precision of 6 decimal places 
}
#include <stdio.h>
//Static vs Dynamic Memory


void main() {
	int z=12;
	
		void g() {
			int x=3;
			int y=4;

			void f() {
				int z= x+y;
			} //function f ends
			
			void h() {
				int z=3;
				int y=2;
				f();
			} //function h ends
			
		h();
		} //function g ends
		
	g();
		printf("%d", z); // What is z after the program executes?
}

/*
For static scoping:
	First, find what z is before the program executes:
		1). z is not declared in f().
		2). Move to the parent function, which is g().
		3). z is not declared, so move to the next parent function main().
		4). z is declared as z=12.
		
   Next, find out z's new quantity:
		1). z= x+y. Find what x and y are.
		2). x nor y are declared in f(), move to parent function g().
		3). x is declared as x=3. y is declared as y=4.
		4). z= x+y, therefore z's new quantity is 7.
*/

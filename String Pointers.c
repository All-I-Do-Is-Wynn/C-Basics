#include <stdio.h>
#include <string.h>

int main(){
	
	char movie1[] = "Divergence"; // this way is not as good because movie1 is treated as a constant
	char * movie2 = "Goosebumps"; // this way is better because movie2 is treated as a variable
	
	puts (movie1);
	puts(movie2);
	
	movie2 = "Limitless";
	
	puts(movie2);

	movie2 = "Paranormal";
	
	puts(movie2);
	
	
	
	
	
	
	return 0;
}

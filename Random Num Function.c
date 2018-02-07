#include <stdio.h>

main(){
	
	int i=2;
	//Time always changes so this will make the seed random
	srand(time(NULL));
	while (i>1){
		printf("%d", 1+rand()%6);
		i++;
	}
	//The while parameter causes it to run nonstop.
	
	return 0;
}

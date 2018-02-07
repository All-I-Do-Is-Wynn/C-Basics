#include <stdio.h>
#include <stdlib.h>

void product(float x, float y, float ans);

int main(){
	float x,y,ans;
	product( x, y, ans);
	
	return 0;
}





void product( float x, float y, float ans){
	printf("Multiplication: Enter the two numbers you would like multiplied.\n");
	scanf("%f,", &x);
	scanf("%f", &y);
	ans= x*y;
	printf("%f", ans);
	
}

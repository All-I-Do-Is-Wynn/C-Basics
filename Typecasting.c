#include <stdio.h>
#include <string.h>

int main(){
	
	float avg_profit;
	int priceofpumpkin = 10, sales = 59, days = 7;
	
	avg_profit= ( (float)priceofpumpkin * (float)sales) / (float)days;
	
	printf("%.2f", avg_profit);
	
	
	return 0;
}

#include <stdio.h>


void salesCommission() {
	
	float salesA, salesB, commA, commB, totalCommission;


	printf("Enter sales made for company A: ");
	scanf("%f", &salesA);
	
	printf("Enter sales made for company B: ");
	scanf("%f", &salesB);

	//For Company A:

	if (salesA >= 2000) {
		commA = (5.0/100) * 2000;
		float extraAmountA = salesA - 2000;
		
		commA += (6.0/100) * extraAmountA;
		
	} else commA = (5.0/100) * salesA;
	
	//For Company B:
	
	if (salesB >= 5000) {
		commB = (15.0/100) * salesB;
	} else commB = (10.0/100) * salesB;
	

	totalCommission = commA + commB;

	printf("Total commission made: %d\n", (int)totalCommission);

}


int main() {
    salesCommission();
    

    return 0;
}
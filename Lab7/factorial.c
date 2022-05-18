//ANUROJ BASKOTA!!!!!!
#include <stdio.h>

void main() {
	int n;
	int factl = 1;

	printf("Enter number: ");
	scanf("%d",&n);

	for (int i=1; i<=n; i++) {
		
		factl *= i;
	
	}

	printf("Factorial: %d\n",factl);
}

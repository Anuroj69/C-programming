
//ANUROJ BASKOTA!!!!!!
#include <stdio.h>

void main() {
	
	int n1, n2;

	printf("Enter two numbers: ");
	scanf("%d%d", &n1, &n2);
	
	int hcf;

	for (int i=1; i <= n1; i++){
		if ( n1 % i == 0 && n2 % i==0 ) {
			hcf = i;
		}
	}

	printf("HCF of %d and %d is: %d\n", n1, n2, hcf);
}

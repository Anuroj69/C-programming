//ANUROJ BASKOTA!!!!!!
#include <stdio.h>


void main() {
	int first, second, third;
	
	printf("Enter first number: ");
	scanf("%d", &first);
	printf("Enter second number: ");
	scanf("%d", &second);
	printf("Enter third number: ");
	scanf("%d", &third);

/*
	USING IF AND ELSE IF ONLY.
*/	

	if (first > second) {
		if (first > third) {
			printf("%d is the greatest.\n", first);
		} else {
			printf("%d is the greatest.\n", third);
		}
	} else {
		if (third > second) {
			printf("%d is the greatest.\n", third);
		} else {
			printf("%d is the greatest.\n", second);
		}
	}

/*
	A BETTER WAY TO FIND THE GREATEST AMONG THREE.
*/

	if (first > second && first > third) {
		printf("%d is the greatest.\n", first);
	} else if (second > third) {
		printf("%d is the greatest.\n", second);
	} else {
		printf("%d is the greatest.\n", third);
	}	
}

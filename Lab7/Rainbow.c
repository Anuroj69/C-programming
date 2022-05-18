//ANUROJ BASKOTA!!!!!!
#include <stdio.h>

void main() {
	
	char color;

	printf("Enter colour character:");

	scanf("%c",&color);

	switch (color) {
		
		case 'V':
		printf("Violet");
		break;
		
		case 'I':
		printf("Indigo");
		break;

		case 'B':
		printf("Blue");
		break;

		case 'Y':
		printf("Yellow");
		break;

		case 'O':
		printf("Orange");
		break;	

		case 'R':
		printf("Red");
		break;

		default:
		printf("Invalid Input!");
	}

	printf("\n");
	
}

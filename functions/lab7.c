// anuroj baskkota !!
#include <stdio.h>

void factorial() {
    
	int n;
	int factl = 1;

	printf("Enter number: ");
	scanf("%d",&n);

	for (int i=1; i<=n; i++) {
		
		factl *= i;
	
	}

	printf("Factorial: %d\n",factl);

}

void HCF() {
    
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

void LeapYear() {
    
	int  year;
	printf("Enter Year: ");
	scanf("%d",&year);

	if (year % 4 == 0) {
		printf("%d is a leap year.\n",year);
	} else {
		printf("%d is not a leap year.\n",year);
	}
}

void LowerAndUpperCase() {
	char inp;
	printf("Enter character: ");
	scanf(" %c", &inp);

	if ((int) inp < 90) {
		printf("Upper to Lower: %c\n", (char)(((int) inp) + 32));
	} else {
		printf("Lower to Upper: %c\n", (char)(((int) inp) - 32));
	}
}

void Rainbow() {
	
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


int main() {
    factorial();
    HCF();
    LeapYear();
    LowerAndUpperCase();
    Rainbow();
    return 0;
}
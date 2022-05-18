///ANUROJ BASKOTA!!!
#include <stdio.h>
#include <math.h>
#define pi 3.14

void ab2c() {
	int a,b,c;
	double prod;

	printf("Enter \"a\" \"b\" \"c\": ");
	scanf("%d%d%d",&a,&b,&c);
	
	prod = (a * b * b) / c;
	printf("ab^2/c = %lf\n", prod);	

}

void greatestAmongThree () {
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

void volumeOfCircle() {
	int rad;
	float vol;
	
	printf("Enter radius of the circle: ");
	scanf("%d",&rad);
	
	vol = (4/3.0) * pi * rad*rad*rad;

	printf("The volume of circle is: %f\n", rad, vol);

}


void voteEligibility() {
	int age;
	
	printf("Enter age: ");
	scanf("%d",&age);
	
	if (age >= 18) {
		printf("You are eligible to vote.\n");
	} else {
		printf("You are not eligible to vote.\n");
	}
	
}


int main() {
    ab2c();
    greatestAmongThree();
    volumeOfCircle();
    voteEligibility();

    return 0;
}

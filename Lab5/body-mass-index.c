//ANUROJ BASKOTA!!!!!!
#include <stdio.h>
#include <math.h>
#define feetToInches 12
#define inchesToMetres 1/40

/*
to input height in ft and inches, weight in kg convert height to inches and again convert it to meters. Now, divide your weight by square of your height in meteers  and finally assign output to variable ratio. use symbolic constant to reoresent various constant factors.
*/


void main() {
	float heightInFeet, heightInInches, totalHeightInInches, heightInMetres, weightInKgs;
	
	double ratio;
	
	printf("Enter height in feets and inches [\"ft in\"]: ");

	scanf("%f%f", &heightInFeet, &heightInInches);

	totalHeightInInches = heightInInches + (heightInFeet * feetToInches);

	heightInMetres = (totalHeightInInches * inchesToMetres);
	
	printf("Enter weight in kgs: ");
	scanf("%f", &weightInKgs);
	
	ratio = weightInKgs / pow(heightInMetres,2);

	printf("Body Mass Index: %lf\n", ratio);

}

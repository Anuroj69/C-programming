#include <stdio.h>
#include <math.h>
#define feetToInches 12
#define inchesToMetres 1/40

void result() {

	int totalMarks=0;
	float percentage;

	for (int i=0; i<5; i++) {
		int tempMark;
		printf("Enter marks for subject no. %d:\n> ", i+1);
		
		scanf("%d", &tempMark);
		
		if (tempMark >= 0 && tempMark <= 100) totalMarks += tempMark;
		else {
			printf("\n~~Enter a value between 0 and 100~~\n");
			i--;
		}

	}
	
	percentage =(float) (totalMarks) / 5;
	
	if (percentage >= 90) {
		printf("You have passed.\nPercentage: %d%\nGrade: A\n", (int) percentage);
	} else if (percentage >= 85) {
		printf("You have passed.\nPercentage: %d%\nGrade: A-\n", (int) percentage);
	} else if (percentage >= 80) {
		printf("You have passed.\nPercentage: %d%\nGrade: B+\n", (int) percentage);
	} else if (percentage >= 70) {
		printf("You have passed.\nPercentage: %d%\nGrade: B-\n", (int) percentage);
	} else if (percentage >= 60) {
		printf("You have passed.\nPercentage: %d%\nGrade: B\n", (int) percentage);
	} else if (percentage >= 50) {
		printf("You have passed.\nPercentage: %d%\nGrade: C+\n", (int) percentage);
	} else {
		printf("You have failed.\nGrade: F\n", (int) percentage);
	}


}

void prePost() {
	int a = 11;

	a = a++ + ++a;
	
	printf("%d",a);
}

/*
to input height in ft and inches, weight in kg convert height to inches and again convert it to meters. Now, divide your weight by square of your height in meteers  and finally assign output to variable ratio. use symbolic constant to reoresent various constant factors.
*/


void BMI() {
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



int main() {
    result();
    prePost();
    BMI();
    
    return 0;
}
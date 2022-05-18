//ANUROJ BASKOTA!!!!!!


/*

WAP to read the marks of six subjects of first semester for a student, calculate the total marks, check the result pass or fail for the student, also calculate the percentage and grade of the student. Finally point pass or fail, percentage and grade as follow:-

	Grade		Percentage
	A		>= 90
	A-		>= 85, <90
	B+		>= 80, <85
	B-		>= 70, <80
	B		>= 60, <70
	C+		>= 50, <60
	...	

*/


#include <stdio.h>

void main() {

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

//ANUROJ BASKOTA!!!!!!
#include <stdio.h>

/*
 * C program that takes an alphabet (character) as input from user and then gives the same alphabet with inverted case as output.
 *
 * i.e. a -> A
 * 	A -> a
 * */



void main() {
	char inp;
	printf("Enter character: ");
	scanf(" %c", &inp);

	if ((int) inp < 90) {
		printf("Upper to Lower: %c\n", (char)(((int) inp) + 32));
	} else {
		printf("Lower to Upper: %c\n", (char)(((int) inp) - 32));
	}
}

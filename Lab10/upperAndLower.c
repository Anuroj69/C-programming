//ANUROJ BASKOTA!!!!

#include <stdio.h>

int main() {
	// char inp;
	// printf("Enter character: ");
	// scanf(" %c", &inp);

	// if ((int) inp < 90) {
	// 	printf("Upper to Lower: %c\n", (char)(((int) inp) + 32));
	// } else {
	// 	printf("Lower to Upper: %c\n", (char)(((int) inp) - 32));
	// }


    char inp;
    printf("Enter alphabet: ");
    scanf(" %c", &inp);

    if ( inp < 90 ) {
        printf("Upper to Lower: %c\n", inp + 32);
    } else {
        printf("Lower to Upper: %c\n", inp - 32);
    }




    return 0;
}

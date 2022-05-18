//ANUROJ BASKOTA!!!!!!
#include <stdio.h>

void main() {

    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int temp = n;
    int rev=0;
    
    while (n > 0) {
        int lastDig = n % 10;
        rev = rev*10 + lastDig;
        n /= 10;
    }
    if (rev == temp) {
        printf("The number is palindrome.\n");
    } else {
        printf("The number is not palindrome.\n");
    }


}
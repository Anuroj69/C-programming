//ANUROJ BASKOTA!!!!

#include <stdio.h>
// This uses pointers.
void swap(int *ptrA, int *ptrB) {
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
}


int main() {
    int a,b;

    printf("Enter Number: ");
    scanf("%d%d", &a, &b);

    printf("Before swapping, a: %d  b: %d\n", a, b);
    swap(&a, &b);
    printf("After swapping, a: %d  b: %d\n", a, b);

    return 0;
}
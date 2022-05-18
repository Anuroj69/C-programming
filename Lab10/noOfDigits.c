//ANUROJ BASKOTA!!!!
#include <stdio.h>

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    int count = 0;
    int temp = num;
    while (num>0)
    {
        count++;
        num/=10;
    }

    printf("Number of digits in %d: %d\n", temp, count);
    


    return 0;
}
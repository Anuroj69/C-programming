//ANUROJ BASKOTA!!!!!!

#include <stdio.h>

void main() {


    int a=0, b=1, c=1, n;
    printf("Enter the number of fibonacci numbers you want to generate: ");
    scanf("%d",&n);

    for (int i=0; i<n; i++) {
        printf("%d\n",a);
        a = b;
        b = c;
        c += a;
    }
}
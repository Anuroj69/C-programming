//ANUROJ BASKOTA!!!!

#include <stdio.h>
#include <math.h>

double factorial(int number) {
    double fact = 1;
    for (int i=1; i<=number; i++) {
        fact *= i;
    }
    return fact;
}

double sum(int x, int n) {
    double sum=x;
    int powerFact = 2;
    for (int i=1; i<=n; i++) {
        sum += pow(x,powerFact) / factorial(powerFact);
    
        powerFact+=2;
    }
    return sum;
}

int main() {

    int x, n;
    printf("Enter value of x and n: ");
    scanf("%d %d", &x, &n);

    printf("Sum is: %lf\n", sum(n,x));


    return 0;
}
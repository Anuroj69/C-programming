//ANUROJ BASKOTA!!!!!!
/** 
 * sine a = x - x^3/3! + x^5/5! - x^7/7! +.......... nth term.
 * convert x into radian. (pi x/180)
 * find the value of sin a
 */
#include <stdio.h>
#include <math.h>
#define pi 3.14

double factorial(int x) {
    double fact = 1;
    for (int i=1; i<=x; i++) {
        fact *= i;
    }
    return fact;
}

void main () {
    int n;
    double x;

    printf("Enter n and x: ");
    scanf("%d %lf",&n,&x);

    x = (pi * x) /180;
 
    double sine=x;
    int powerFact = 3;
    for (int i = 1; i<= n; i++) {
        
        sine += pow(-1,i) * (pow(x,powerFact) / (float)factorial(powerFact));

    }

    printf("Sine: %lf\n", sine);

}
// anuroj baskkota !!
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

void sine () {
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

/**

1 2 3 2 1
4 5 6 5 4
7 8 9 8 7
10 11 12 11 10

 */
void second() {
    
    for (int i=1; i<=10; i+=3) {
        for (int j=i; j<i+2; j++) {
            printf("%d ",j);
        }
        for (int j=i+2; j>=i; j--) {
            printf("%d ",j);
        }
        printf("\n");
    }
}

void asterisks() {

    for (int i=1; i<=5; i++) {

        for (int j=1; j<= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void fibonacci() {
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

void checkPalindrome() {
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

int main() {

    sine();
    printf("\n");
    checkPalindrome();
    printf("\n");
    second();
    printf("\n");
    fibonacci();
    printf("\n");
    asterisks();

    return 0;
}
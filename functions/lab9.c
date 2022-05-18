// anuroj baskkota !!
#include <stdio.h>
/**
First:
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

Second: 

0  1 1 1 1
2  0 2 2 2
3  3 0 3 3
4  4 4 0 4
5  5 5 5 0

Third:
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5

*/


void first() {
    int toPrint = 1;

    for (int i=1; i<=5; i++) {
        int j;
        for (j=1; j<=i; j++) {

            printf("%d ",toPrint);

            if (toPrint == 1) toPrint = 0;
            else toPrint = 1;
        }
        if (j % 2 == 0) toPrint = 0;
        else toPrint = 1;

        printf("\n");
    }
}

void second() {
    for (int i=1; i<=5; i++) {
        for (int j=1; j<=5; j++) {
            if (j==2) printf(" ");
            if (i == j) printf("0 ");
            else printf("%d ",i);
        }
        printf("\n");
    }
}

void third() {
    for (int i=1; i<=5; i++) {
        for (int j=0; j<i; j++) {
            printf("%d ",i);
        }
        printf("\n");
    }
}

int main() {
    printf("First: \n");
    first();
    printf("\nSecond: \n");
    second();
    printf("\nThird: \n");
    third();
    
    return 0;
}
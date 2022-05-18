//ANUROJ BASKOTA!!!!
#include <stdio.h>
/*
8
0
6 6 6
0
4 4 4 4 4
0
2 2 2 2 2 2 2
*/
void pattern1() {
    for (int i=1; i<=7; i++) {
        for (int j=1; j<=i; j++) {
            if (i&1) {
                printf("%d", 9-i);
            } else {
                printf("0");
                break;
            }
        }
        printf("\n");
    }
}

/*
 8  8  8  8  8
 0 16 16 16
24 24 24
 0 32
4
*/
void pattern2() {
    for (int i=5; i>=1; i--) {
        for (int j=1; j<=i; j++) {
            printf("%d ", (6-i)*8);
        }
        printf("\n");
    }
}




int main() {
    pattern2();
    return 0;
}
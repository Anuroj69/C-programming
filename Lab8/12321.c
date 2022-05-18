//ANUROJ BASKOTA!!!!!!
#include <stdio.h>

void main() {

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
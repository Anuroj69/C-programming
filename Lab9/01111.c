//ANUROJ BASKOTA!!!!!!

#include <stdio.h>

/**
 * 01111
 * 20222
 * 33033
 * 44404
 * 55550
 * 
 */

int main() {

    for (int i=1; i<=5; i++) {
        for (int j=1; j<=5; j++) {
            if (j==2) printf(" ");
            if (i == j) printf("0 ");
            else printf("%d ",i);
        }
        printf("\n");
    }
    
}
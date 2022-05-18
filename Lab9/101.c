#include <stdio.h>
//ANUROJ BASKOTA!!!!!!




// int main() {
//     int toPrint = 1;
//     for (int i=1; i<=5; i++) {
//         if (i%2 == 0) toPrint=0;
//         else toPrint=1;
//         for (int j=0; j<i; j++) {
//             printf("%d",toPrint);
//             if (toPrint == 1) toPrint--;
//             else toPrint++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

/**
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
 */


int main() {
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


    return 0;
}
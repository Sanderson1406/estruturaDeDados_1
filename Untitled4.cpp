#include <stdio.h>

int operando1[2][3];
int operando2[3][2];
int resul[2][2];
int a = 0;
int b = 0;
int c = 0;

int main() {
    for (a = 0 ; a < 2; a++ ) {
        for (b = 0; b < 3; b++) {
            operando1[a][b] = 0;
        }
    }
    for (a = 0 ; a < 3; a++ ) {
        for (b = 0; b < 2; b++) {
            operando2[a][b] = 0;
        }
    }
    for (a = 0 ; a < 2; a++ ) {
        for (b = 0; b < 2; b++) {
            resul[a][b] = 0;
        }
    }

    for (a = 0 ; a < 2; a++ ) {
        for (b = 0; b < 3; b++) {
            printf("operando1[%d, %d] = ", a, b);
            scanf("%d", &operando1[a][b]);
        }
    }
        for (a = 0 ; a < 3; a++ ) {
        for (b = 0; b < 2; b++) {
            printf("operando1[%d, %d] = ", a, b);
            scanf("%d", &operando2[a][b]);
        }
    }

    for (a = 0; a < 2; a++) {
        for (b = 0; b < 2; b++) {
            for (c = 0; c < 3; c++) {
                resul[a][b] += (operando1[a][b] * operando2[a][b]);
            }
        }
    }

    for (a = 0; a < 2; a++) {
        for (b =0; b < 2; b++) {
            printf("%d\t", resul[a][b]);
        }
        printf("\n");
    }
};
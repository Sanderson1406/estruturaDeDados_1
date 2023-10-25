#include <stdio.h>

int matriz[2][3];
int transposta[3][2];
int i;
int j;

int main() {
	for (i = 0; i < 2; i ++) {
		for (j = 0; j < 3; j++) {
			matriz[i][j] = 0;
			transposta[j][i] = 0;
		}
	}
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("Digite o valor da da linha %d, coluna %d\n", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
		for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			transposta[j][i] = matriz[i][j];
		}
	}
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
		for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

//Cria uma matriz 2x3 e 3x2

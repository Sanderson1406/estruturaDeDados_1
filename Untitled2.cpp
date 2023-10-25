#include <stdio.h>

int vetorOriginal[10];
int vetorInvertido[10];
int i = 0;

int main() {
	for (i = 0; i < 10 ; i++) {
		vetorOriginal[i] = 0;
		vetorInvertido[i] = 0;
	}
	for (i = 0; i < 10; i++ ) {
		printf("Digite o valor da posicao %d do vetor: ", i);
		scanf("%d", &vetorOriginal[i]);
	}
	for (i = 9; i >= 0 ; i--) {
		vetorInvertido[9-i] = vetorOriginal[i];
	}
	for (i =0; i < 10; i++) {
		printf("vetorOrigianl[%d] = %d\n", i, vetorOriginal[i]);
	}
	printf("\n");
	for (i = 0; i < 10; i++) {
		printf("vetorInvertido[%d] = %d\n", i, vetorInvertido[i]);
	}
}

//LIsta normal e lista invertida

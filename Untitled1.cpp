#include <stdio.h>

int vetor [10];
int i = 0;

int main() {
	for (i =0; i < 10; i++) {
		vetor[i] = 10;
	}
	for (i = 0; i < 10; i++) {
		printf("Digite o valor da posicao %d: ", i);
		scanf("%d", &vetor[i]);
	}
	for (i =0; i < 10; i++) {
		printf("Vetor[%d] = %d\n", i, vetor[i]);
	}
}

//Cria uma lista de 10 elementos

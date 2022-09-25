#include <stdio.h>
#include <stdlib.h>
#define N 5

int main() {
	int vet[N], i, maior, menor;
	
	for (i=0; i<N; i++){
		scanf("%i", &vet[i]);
	}
	maior=vet[0];
	for (i=1; i<N; i++){
		if (vet[i]>maior){
		maior=vet[i];
		}
	}
	menor=vet[0];
	for (i=1; i<N; i++){
		if (vet[i]<menor){
		menor=vet[i];
		}
	}
	printf("Vetor: \n");
	for (i=0; i<N; i++){
		printf("%i ", vet[i]);
	}
	printf("\nMaior valor: %i", maior);
	printf("\nMenor valor: %i", menor);
	printf("\n");
	system("PAUSE");
	return 0;
}

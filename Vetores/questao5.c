#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL,"Portuguese_Brazil");
	
	int i=0, i2=0, vetor1[10], vetor2[10];
	
	for (i=0; i<10; i++){
		printf("digite um valor:\n");
		scanf("%d", &vetor1[i]);
	}
	for (i=0; i<10; i++){
		printf("Valores do vetor1[%d]=%d\n", i, vetor1[i]);
	}
	for (i=10-1; i>=0; i--){
		vetor2[i2]-vetor1[i];
		i2=i2+1;
	}
	printf("\n");
	
	for (i=0; i<10; i++){
	printf("Valores do vetor2[%d]=%d\n", i, vetor2[i]);
	}
	printf("\n");
	system("PAUSE");
	return 0;
}

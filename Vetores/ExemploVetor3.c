#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL,"Portuguese_Brazil");
	int numero3[10];
	int i;
	
	for (i=0; i<10; i++){
		printf("Digite um valor inteiro: \n");
		scanf("%d", &numero3[i]);
	}
	printf("\n");
	
	for (i=0; i<10; i++){
		printf("Conteúdo do vetor numero3[%d]=%d\n", i, numero3[i]);
	}
	system("PAUSE");
	return 0;
}

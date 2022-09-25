#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL,"Portuguese_Brazil");

	int i, vetA[2], vetB[2], vetC[2], vetD[2];
	
	for(i=0;i<2;i++){
	printf("Digite os valores do vetor A: \n");
	scanf("%d", &vetA[i]);
	}
	
	for(i=0;i<2;i++){
	printf("Digite os valores do vetor B: \n");
	scanf("%d", &vetB[i]);
	}
	
	for(i=0;i<2;i++){
	vetC[i]=vetA[i] + vetB[i];
	printf("Valores do vetor C vetC[%d]=%d\n", i, vetC[i]);
	}

	for(i=0;i<2;i++){
	vetD[i]=vetA[i] * vetB[i];
	printf("Valores do vetor D vetD[%d]=%d\n", i, vetD[i]);
	}	
	
	system("PAUSE");
	return 0;
}

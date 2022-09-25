#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL,"Portuguese_Brazil");
	
	int vetor[50], i;
	    printf("Informe um valor:\n");
	    scanf("%d", &vetor[i]);
	    
	for(i=0; i<50; i++){
		vetor[i]=i*i;
	}
	for(i=0; i<50; i++){
	printf("O dobro do vetor[%d] é = %d\n", i, vetor[i]);
	}
		
	system("PAUSE");
	return 0;
}

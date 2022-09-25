#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define N

int main() {
	setlocale (LC_ALL,"Portuguese_Brazil");
	int A[2]={}, B[2]={}, C[2]={}, i, i2;

	for(i=0; i<2; i++){
		printf("Digite um valor: \n");
		scanf("%d", &A[i]);
	}
	for(i=0; i<2; i++){
		printf("Digite um valor: \n");
		scanf("%d", &B[i]);
	}
	for(i=0; i<2; i++){
		C[i]=A[i]+B[i];
	}
	for(i2=0; i2<2; i2++){
		printf("\nO valor da soma dos números é: %d\n", C[i2]); 
	}
	printf("\n");
	system("PAUSE");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL,"Portuguese_Brazil");
	int numero[10];
	int numero2[5]={23,24,34,38,55};
	int i;
	//Atribuir valores ao vetor
	numero[0]=10;
	numero[1]=20;
	numero[2]=30;
	numero[3]=40;
	numero[4]=50;
	numero[5]=60;
	numero[6]=70;
	numero[7]=80;
	numero[8]=90;
	numero[9]=100;
	//Imprimir valores do vetor numero
	for (i=0; i<10; i++){
		printf("Valores de vetor número[%d]= %d\n", i, numero[i]);
	}
	printf("\n");
	//Imprimir valores do vetor numero2
	for (i=0; i<5; i++){
		printf("Valores de vetor número2[%d]= %d\n", i, numero2[i]);
	}
	printf("\n");
	
	system("PAUSE");
	return 0;
}

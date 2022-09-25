#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL,"Portuguese_Brazil");
	
	int qtd1, qtd2, resp;
	float compraB, compraA, total;
	
	printf("Digite a quantidade de berinjelas compradas:\n");
	scanf("%d", &qtd1);
	printf("\n");
	printf("Digite a quantidade de alfaces compradas:\n");
	scanf("%d", &qtd2);
	
	if (qtd1 >= 12){
   	compraB= qtd1 * 1.55;
	}
	else {
   	compraB= qtd1 * 1.80;
	}
	
	if (qtd2 >= 12){
	compraA= qtd2 * 3.45;
	}
	else {
    compraA= qtd2 * 4.60;
	}
    
    total=compraB+compraA;
	printf("o valor de sua compra é: R$ %f\n", total);
	
	
	system("PAUSE");
	return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL,"Portuguese_Brazil");
	
	int qtd;
	float compra;
	printf("Digite a quantidade de maçãs compradas :");
	scanf("%d", &qtd);
	
	if (qtd >= 12){
	   compra= qtd * 0.35;
	}
	else {
	   compra= qtd * 0.50;
	}
	printf("o valor de sua compra é: R$ %f", compra);
	
	system("PAUSE");
	return 0;
}

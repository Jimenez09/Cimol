#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int op, num, num2, soma, sub;
		printf("Digite a opção 1-Soma \n 2-Subtração \n");
		scanf("%d", &op);
	switch(op){
		case1:
			printf("Digite o 1º valor: \n");
			scanf("%d", &num);
			printf("Digite o 2º valor: \n");
			scanf("%d", &num2);
			soma= num+num2;
			printf("Total da soma: %d\n", soma);
		break;
		case2:
			printf("Digite o 1º valor: \n");
			scanf("%d", &num);
			printf("Digite o 2º valor: \n");
			scanf("%d", &num2);
			sub= num-num2;
			printf("Total da subtração: %d\n", sub);
		break;
		default:
			printf("Opção inválida! \n");
	}
	system("PAUSE");
	return 0;
}

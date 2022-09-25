#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int op, num, num2, soma, sub, div, vezes;
		printf("Digite a opção \n1-Soma \n2-Subtração \n3-Divisão \n4-Multiplicação \n");
		scanf("%d", &op);
	switch(op){
		case 1:
			printf("Digite o 1º valor: \n");
			scanf("%d", &num);
			printf("Digite o 2º valor: \n");
			scanf("%d", &num2);
			soma= num+num2;
			printf("Total da soma: %d\n", soma);
		break;
		case 2:
			printf("Digite o 1º valor: \n");
			scanf("%d", &num);
			printf("Digite o 2º valor: \n");
			scanf("%d", &num2);
			sub= num-num2;
			printf("Total da subtração: %d\n", sub);
		break;
		case 3:
			printf("Digite o 1º valor: \n");
			scanf("%d", &num);
			printf("Digite o 2º valor: \n");
			scanf("%d", &num2);
			div= num/num2;
			printf("Total da divisão: %d\n", div);
		break;
		case 4:
			printf("Digite o 1º valor: \n");
			scanf("%d", &num);
			printf("Digite o 2º valor: \n");
			scanf("%d", &num2);
			vezes= num*num2;
			printf("Total da multiplicação: %d\n", vezes);
		break;
		default:
			printf("Opção inválida! \n");
	}
	system("PAUSE");
	return 0;
}

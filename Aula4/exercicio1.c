#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int op, num, num2, soma, sub;
		printf("Digite a op��o 1-Soma \n 2-Subtra��o \n");
		scanf("%d", &op);
	switch(op){
		case1:
			printf("Digite o 1� valor: \n");
			scanf("%d", &num);
			printf("Digite o 2� valor: \n");
			scanf("%d", &num2);
			soma= num+num2;
			printf("Total da soma: %d\n", soma);
		break;
		case2:
			printf("Digite o 1� valor: \n");
			scanf("%d", &num);
			printf("Digite o 2� valor: \n");
			scanf("%d", &num2);
			sub= num-num2;
			printf("Total da subtra��o: %d\n", sub);
		break;
		default:
			printf("Op��o inv�lida! \n");
	}
	system("PAUSE");
	return 0;
}

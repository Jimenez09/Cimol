#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int op, num, num2, soma, sub, div, vezes;
		printf("Digite a op��o \n1-Soma \n2-Subtra��o \n3-Divis�o \n4-Multiplica��o \n");
		scanf("%d", &op);
	switch(op){
		case 1:
			printf("Digite o 1� valor: \n");
			scanf("%d", &num);
			printf("Digite o 2� valor: \n");
			scanf("%d", &num2);
			soma= num+num2;
			printf("Total da soma: %d\n", soma);
		break;
		case 2:
			printf("Digite o 1� valor: \n");
			scanf("%d", &num);
			printf("Digite o 2� valor: \n");
			scanf("%d", &num2);
			sub= num-num2;
			printf("Total da subtra��o: %d\n", sub);
		break;
		case 3:
			printf("Digite o 1� valor: \n");
			scanf("%d", &num);
			printf("Digite o 2� valor: \n");
			scanf("%d", &num2);
			div= num/num2;
			printf("Total da divis�o: %d\n", div);
		break;
		case 4:
			printf("Digite o 1� valor: \n");
			scanf("%d", &num);
			printf("Digite o 2� valor: \n");
			scanf("%d", &num2);
			vezes= num*num2;
			printf("Total da multiplica��o: %d\n", vezes);
		break;
		default:
			printf("Op��o inv�lida! \n");
	}
	system("PAUSE");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int op, quantidade;
	float valor, valortotal;
		printf("Digite a opção do cardápio: \n");
		printf(" 1= Xis da Casa - R$19,00 \n");
		printf(" 2= Xis Coração - R$24,00 \n");
		printf(" 3= Xis Galinha - R$22,00 \n");
		printf(" 4= Xis Bacon - R$26,00 \n");
		printf(" 5= Calabresa - R$22,00 \n");
		printf(" 6= Xis Dog - R$18,00 \n");
		printf("\n");
		scanf(" %d", &op);
		printf("\n");
	
	switch(op){
		case 1:
			printf("Digite o valor do lanche: \n");
			scanf("%f", &valor);
			printf("Digite a quantidade desejada: \n");
			scanf("%d", &quantidade);
			valortotal=valor*quantidade;
			printf("O valor total a pagar é: %.2f \n", valortotal);
		break;
		case 2:
			printf("Digite o valor do lanche: \n");
			scanf("%f", &valor);
			printf("Digite a quantidade desejada: \n");
			scanf("%d", &quantidade);
			valortotal=valor*quantidade;
			printf("O valor total a pagar é: %.2f \n", valortotal);
		break;
		case 3:
			printf("Digite o valor do lanche: \n");
			scanf("%f", &valor);
			printf("Digite a quantidade desejada: \n");
			scanf("%d", &quantidade);
			valortotal=valor*quantidade;
			printf("O valor total a pagar é: %.2f \n", valortotal);
		break;
		case 4:
			printf("Digite o valor do lanche: \n");
			scanf("%f", &valor);
			printf("Digite a quantidade desejada: \n");
			scanf("%d", &quantidade);
			valortotal=valor*quantidade;
			printf("O valor total a pagar é: %.2f \n", valortotal);
		break;
		case 5:
			printf("Digite o valor do lanche: \n");
			scanf("%f", &valor);
			printf("Digite a quantidade desejada: \n");
			scanf("%d", &quantidade);
			valortotal=valor*quantidade;
			printf("O valor total a pagar é: %.2f \n", valortotal);
		break;
		case 6:
			printf("Digite o valor do lanche: \n");
			scanf("%f", &valor);
			printf("Digite a quantidade desejada: \n");
			scanf("%d", &quantidade);
			valortotal=valor*quantidade;
			printf("O valor total a pagar é: %.2f \n", valortotal);
		break;
		default:
			printf("Opção inválida!");
	}
		printf("\n");
	system("PAUSE");
	return 0;
}

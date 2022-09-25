#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int op, quantidade;
	float valor, valortotal, desconto;
		printf("\nDigite o código do produto:\n");
		printf("===============================");
		printf("\n 1 a 10 - R$10,00 \n");
		printf("\n 11 a 20 - R$15,00 \n");
		printf("\n 21 a 30 - R$20,00 \n");
		printf("\n 31 a 40 - R$30,00 \n");
		printf("===============================");
		printf("\n");
		scanf("%d", &op);
		printf("\n");
		
	switch(op){
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
			if(valortotal<=250){
				printf("Digite o valor do produto:\n");
				scanf("%f", &valor);
				printf("\n");
				printf("Digite a quantidade desejada: \n");
				scanf("%d", &quantidade);
				printf("\n");
				desconto=valortotal*0.05;
				valortotal=valor*quantidade;
				printf("O valor total a pagar é: %.2f \n", valortotal);
				printf("\n");
				printf("Você ganhou 5% de desconto!\n");
			}
			if((valortotal>250)&&(valortotal=500)){
				printf("Digite o valor do produto:\n");
				scanf("%f", &valor);
				printf("Digite a quantidade desejada: \n");
				scanf("%d", &quantidade);
				valortotal=valor*quantidade;
				desconto=valortotal*0.1;
				printf("O valor total a pagar é: %.2f \n", valortotal);
				printf("Você ganhou 10% de desconto!\n");
			}
			if(valortotal>500){
				printf("Digite o valor do produto:\n");
				scanf("%f", &valor);
				printf("Digite a quantidade desejada: \n");
				scanf("%d", &quantidade);
				valortotal=valor*quantidade;
				desconto=valortotal*0.15;
				printf("O valor total a pagar é: %.2f \n", valortotal);
				printf("Você ganhou 15% de desconto!\n");
			}
		break;
	}
	
	
	system("PAUSE");
	return 0;
}

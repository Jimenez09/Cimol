#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int op;
	float valor, valortotal, desconto;
	
		printf("Digite o código do cliente:\n");
		printf("1= Cliente padrão!\n");
		printf("2= Cliente VIP!\n");
		printf("3= Funcionário!\n");
		printf("\n");
		scanf("%d", &op);
		printf("\n");
		
	switch(op){
		case 1:
			printf("Digite o valor da compra!\n");
			scanf("%f", &valor);
			scanf("Total da compra: %.2f \n", valor);
		break;
		case 2:
			printf("Digite o valor da compra!\n");
			scanf("%f", &valor);
			desconto=valor*0.1;
			valortotal=valor-desconto;
			printf("Total da compra: %.2f \n", valortotal);
		break;
		case 3:
			printf("Digite o valor da compra!\n");
			scanf("%f", &valor);
			desconto=valor*0.05;
			valortotal=valor-desconto;
			printf("Total da compra: %.2f \n", valortotal);
		break;
		default:
			printf("Valor inválido! \n");
	}
	system("PAUSE");
	return 0;
}

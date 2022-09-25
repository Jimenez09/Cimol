#include <stdio.h>
#include <stdlib.h>

int main() {
	int codpag;
	float valor, valorfinal;
	
		printf("Digite o valor da compra!\n");
		scanf("%f", &valor);
		
		printf("\nDigite a condicao de pagamento de sua compra\n");
		printf("\n1= A vista em dinheiro ou cheque, com 10%% de desconto!\n");
		printf("\n2= A vista com cartao de credito, com 5%% de desconto!\n ");
		printf("\n3= Em 2X, preco normal de etiqueta sem juros!\n");
		printf("\n4= Em 3X, preco da etiqueta co 10%% de acrescimo!\n");
		printf("\n");
		scanf("%d", &codpag);
		printf("\n");
	
	if(codpag==1){
		valorfinal=valor-(valor*0.1);
		printf("A condicao da sua compra ficou R$:%.2f", valorfinal);
	}
	if(codpag==2){
		valorfinal=valor-(valor*0.05);
		printf("A condicao da sua compra ficou R$:%.2f", valorfinal);
	}
	if(codpag==3){
		valorfinal=valor/2;
		printf("A condicao da sua compra ficou em 2X de R$:%.2f", valorfinal);
	}
	if(codpag==4){
		valorfinal=(valor+(valor*0.1))/3;
		printf("A condicao da sua compra ficou em 3X de R$:%.2f", valorfinal);
	}
		printf("\n");
	system("pause");
	return 0;
}

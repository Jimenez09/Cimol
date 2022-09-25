#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int op;
	
	printf("==========================");
	printf("\n== CADASTRO DE PRODUTOS ==");
	printf("==========================");
	printf("\n1) Cadastrar Produto");
	printf("\n2) Alterar Produto");
	printf("\n3) Remover Produto");
	printf("\n4) Visualizar Produtos");
	printf("\n5) Sair");
	printf("==========================");
	printf("\n>");
	scanf("%i", &op);
	
	if(op==1) { //Cadastrar Produto
		printf("\nCADASTRAR");
	}
	else if(op==2) { //Alterar Produto
		printf("\nALTERAR");
	}
	else if(op==3){ //Remover Produto
		printf("\nREMOVER");
	}
	else if(op==4) { //Visualizar Produtos
		printf("\nVISUALIZAR");
	}
	else if(op==5) { //Sair
		printf("\nSAIR");
	}
	else { //Opção Inválida
		printf("\nOPCAO INVALIDA");
	}
	
		printf("\n");
	
	
	system("PAUSE");
	return 0;
}

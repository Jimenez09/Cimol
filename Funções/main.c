#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int op, soma, sub, divisao, multi, num1, num2;
void fsoma();
void fsub();
void fdiv();
void fmulti();

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	printf("Digite o primeiro valor: \n");
	scanf("%d", &num1);
	printf("Digite o segundo valor: \n");
	scanf("%d", &num2);
	printf("\n");
	printf("Escolha a equação: \n");
	printf("1- Adição \n");
	printf("2- Subtração \n");
	printf("3- Divisão \n");
	printf("4- Multiplicação \n");
	printf("5- Sair! \n");
	scanf("%d", &op);
	printf("\n");
	
	switch (op){
		case 1:
			fsoma();
		break;
		case 2:
			fsub();
		break;
		case 3:
			fdiv();
		break;
		case 4:
			fmulti();
		break;
		default:
			printf("Você saiu!!! \n");
	}
	
	system ("PAUSE");
	return 0;
}
void fsoma(){
	soma = num1+num2;
	printf("Total da soma é: %d \n", soma);
}
void fsub(){
	sub = num1-num2;
	printf("Total da soma é: %d \n", sub);
}
void fdiv(){
	divisao = num1/num2;
	printf("Total da soma é: %d \n", divisao);
}
void fmulti(){
	multi = num1*num2;
	printf("Total da soma é: %d \n", multi);
}

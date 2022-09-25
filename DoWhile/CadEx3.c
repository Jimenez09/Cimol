#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL,"Portuguese_Brazil");
	
	int op, num1, num2, div=0, sub=0, adicao=0, mult=0;
		printf("Digite dois valores:\n");
		scanf("%d %d", &num1, &num2);
	do{
		printf("1. Soma\n");
		printf("2. Subtração\n");
		printf("3. Multiplicação\n");
		printf("4. Divição\n");
		printf("0. Sair!\n");
		scanf("%d", &op);
			
		switch(op){
			case 0:
				printf("Saindo!\n");
				break;
			case 1:
				printf("Sua soma é: %d\n", num1+num2);
				break;
			case 2:
				printf("Sua subtração é: %d\n", num1-num2);
				break;
			case 3:
				printf("Sua multiplicação é: %d\n", num1*num2);
				break;
			case 4:
				while(num2==0){
					printf("Não existe divisão por zero! Digite outro valor:");
					scanf("%d", &num2);
				}
				printf("Divisão: %d\n", num1/num2);
				break;
				default:
					printf("Opção inválida!\n Digite outra opção:");
		}
	}while(op!=0);
	
	system("PAUSE");
	return 0;
}

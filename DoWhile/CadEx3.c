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
		printf("2. Subtra��o\n");
		printf("3. Multiplica��o\n");
		printf("4. Divi��o\n");
		printf("0. Sair!\n");
		scanf("%d", &op);
			
		switch(op){
			case 0:
				printf("Saindo!\n");
				break;
			case 1:
				printf("Sua soma �: %d\n", num1+num2);
				break;
			case 2:
				printf("Sua subtra��o �: %d\n", num1-num2);
				break;
			case 3:
				printf("Sua multiplica��o �: %d\n", num1*num2);
				break;
			case 4:
				while(num2==0){
					printf("N�o existe divis�o por zero! Digite outro valor:");
					scanf("%d", &num2);
				}
				printf("Divis�o: %d\n", num1/num2);
				break;
				default:
					printf("Op��o inv�lida!\n Digite outra op��o:");
		}
	}while(op!=0);
	
	system("PAUSE");
	return 0;
}

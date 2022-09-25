#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL,"Portuguese_Brazil");
	int opcao;
	do{
		printf("0. Sair\n");
		printf("1. Imprimir Olá usuário!\n");
		printf("2. Recebe números pares!\n");
		printf("3. Recebe números ímpares!\n");
		scanf("%d", &opcao);
		switch(opcao){
			case 0:
				printf("Sair!\n");
				break;
			case 1:
				printf("Olá usuário!\n");
				break;
			case 2:
				printf("Números pares!\n");
				break;
			case 3:
				printf("Números ímpares!\n");
				break;
			default:
				printf("Opção inválida, tente novamente!\n");
		}
	}while (opcao!=0);
	
	system("PAUSE");
	return 0;
}

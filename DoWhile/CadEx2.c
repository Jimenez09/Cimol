#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL,"Portuguese_Brazil");
	int opcao;
	do{
		printf("0. Sair\n");
		printf("1. Imprimir Ol� usu�rio!\n");
		printf("2. Recebe n�meros pares!\n");
		printf("3. Recebe n�meros �mpares!\n");
		scanf("%d", &opcao);
		switch(opcao){
			case 0:
				printf("Sair!\n");
				break;
			case 1:
				printf("Ol� usu�rio!\n");
				break;
			case 2:
				printf("N�meros pares!\n");
				break;
			case 3:
				printf("N�meros �mpares!\n");
				break;
			default:
				printf("Op��o inv�lida, tente novamente!\n");
		}
	}while (opcao!=0);
	
	system("PAUSE");
	return 0;
}

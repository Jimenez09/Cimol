#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int op, habitantes;
	float nat, mort, taxa;
	
		printf("Digite a opção desejada: \n");
		printf("1= Taxa de Natalidade. \n");
		printf("2= Taxa de Mortalidade. \n");
		scanf("%d", &op);
		printf("\n");
		
	switch(op){
		case 1:
			printf("Digite o número de nascidos: \n");
			scanf("%f", &nat);
			printf("Digite o número de habitantes: \n");
			scanf("%d", &habitantes);
			taxa=(nat*1000)/habitantes;
			printf("Taxa de Natalidade: %.2f\n", taxa);
		break;
		case 2:
			printf("Digite o número de óbitos: \n");
			scanf("%f", &mort);
			printf("Digite o número de habitantes: \n");
			scanf("%d", &habitantes);
			taxa=(mort*1000)/habitantes;
			printf("Taxa de Mortalidade: %.2f\n", taxa);
		break;
		default:
			printf("Opção inválida!\n");
	}
	printf("\n");

system("PAUSE");
return 0;

}

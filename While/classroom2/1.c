#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL,"Portuguese_Brazil");
	int op;
	float vel, ms, km;
	
	while (op!=3){
		printf("Escolha uma opção:\n");
		printf("1- Converta m/s em Km/h\n");
		printf("2- Converta Km/s em m/s\n");
		printf("3- Finalizar!\n");
		scanf("%d", &op);
		printf("\n");
		
		if(op==1){
			printf("Digite a velocidade em m/s:\n");
			scanf("%f", &vel);
			km=vel*3.6;
			printf("A velocidade em Km/h é: %.2f\n", km);
		}
		if(op==2){
			printf("Digite a velocidade em Km/h:\n");
			scanf("%f", &vel);
			ms=vel/3.6;
			printf("A velocidade em m/s é: %.2f\n", ms);
		}
	}
	printf("Finalizar o programa!!!\n");
	
	system("PAUSE");
	return 0;
}

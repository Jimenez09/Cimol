#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL,"Portuguese_Brazil");
	int num=0, cont=0;
	printf("Digite um número:\n");
	scanf("%d", &num);
	
while (num!=7){
	cont=cont+1;
	printf("Digite outro número:\n");
	scanf("%d", &num);
}
printf("O número de tentativas realizadas é: %d\n", cont+1);
printf("Fim de jogo!!!\n");	
	system("PAUSE");
	return 0;
}

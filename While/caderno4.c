#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL,"Portuguese_Brazil");
	int num=0, cont=0;
	printf("Digite um n�mero:\n");
	scanf("%d", &num);
	
while (num!=7){
	cont=cont+1;
	printf("Digite outro n�mero:\n");
	scanf("%d", &num);
}
printf("O n�mero de tentativas realizadas �: %d\n", cont+1);
printf("Fim de jogo!!!\n");	
	system("PAUSE");
	return 0;
}

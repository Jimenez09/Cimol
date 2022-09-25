#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL,"Portuguese_Brazil");
	int senha=0, cont=0;
	printf("Digite uma senha de 4 digítos:\n");
	scanf("%d", &senha);
	
while (senha!=2002){
	cont=cont+1;
	printf("Tente novamente:\n");
	scanf("%d", &senha);
}
printf("Você tentou %d vezes.\n", cont+1);
printf("Acesso permitido!!!!!\n");	
	system("PAUSE");
	return 0;
}

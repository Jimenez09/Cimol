#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL,"Portuguese_Brazil");
	int idade=0, soma=0, cont=0, media=0;
	printf("Digite a idade:\n");
	scanf("%d", &idade);
	
	while (idade!=-1){
		soma=soma+idade;
		cont=cont+1;
		printf("Digite a pr�xima idade:\n");
		scanf("%d", &idade);
	}
	media=soma/cont;
	printf("A m�dia das idades �: %d\n", media);
	
	system("PAUSE");
	return 0;
}

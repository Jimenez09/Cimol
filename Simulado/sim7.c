#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	int i, num, soma, media;
	i=0; num=0; soma=0; media=0;
	for (i=0; i<10; i++){
		printf("Digite um valor: \n");
		scanf("%d", &num);
		soma=soma+num;
		media=soma/10;
	}
	printf("A m�dia dos valores digitados �: %d\n", media);
	
	system("PAUSE");
	return 0;
}

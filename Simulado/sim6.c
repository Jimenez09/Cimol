#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	int i, num, soma;
	num=0; soma=0;
	for (i=0; i<25; i++){
		printf("Digite um valor: \n");
		scanf("%d", &num);
		soma=soma+num;
	}
	printf("Total da soma dos valores digitados: %d\n", soma);

	system("PAUSE");
	return 0;
}

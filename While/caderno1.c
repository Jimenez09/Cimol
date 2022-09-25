#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL,"Portuguese_Brazil");
	int num, soma;
	printf("Digite um número:\n");
	scanf("%d", &num);
	
	while (num!=0){
		soma=soma+num;
		printf("Digite o próximo número:\n");
		scanf("%d", &num);
	}

	printf("A soma dos números é: %d\n", soma);
	
	system("PAUSE");
	return 0;
}

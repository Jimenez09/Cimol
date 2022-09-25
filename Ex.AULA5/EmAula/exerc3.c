#include <stdio.h>
#include <stdlib.h>


int main() {
	int i, num, soma;
	num=0; soma=0;
	for (i=0; i<10; i++){
		printf("Digite um valor: \n");
		scanf("%d", &num);
		soma=soma+num;
	}
	printf("Total da soma dos valores digitados: %d\n", soma);
	
	system("PAUSE");
	return 0;
}

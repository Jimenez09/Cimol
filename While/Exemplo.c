#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL,"Portuguese_Brazil");
	int num, quad;
	printf("Digite um n�mero:\n");
	scanf("%d", &num);
	
	while (num!=0){
		quad=num*num;
		printf("O quadrado do %d: %d\n", num, quad);
		printf("Digite o pr�ximo n�mero:\n");
		scanf("%d", &num);
	}
	
	system("PAUSE");
	return 0;
}

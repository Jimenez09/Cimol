#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	int i, num;
		printf("Digite um valor inteiro: \n");
		scanf("%d", &num);
	for (i=0; i<=num; i++){
		printf("Sua sequência é: %d\n", i);	
	}
	printf("\n");
	for (i=num; i>=0; i--){
		printf("Sua sequência é: %d\n", i);
	}
	
	system("PAUSE");
	return 0;
}

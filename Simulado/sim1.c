#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	int i, num, num2;
		printf("digite dois números inteiros: \n");
		scanf("%d %d", &num, &num2);

	for (i=num; i<=num2; i++){
		printf("Sua sequência é: %d\n", i);

	if(num>num2){
		printf("Primeiro número é o maior: %d\n", num);
	}
	if(num2>num){
		printf("Primeiro número é o maior: %d\n", num2);
	}
	}

	system("PAUSE");
	return 0;
}

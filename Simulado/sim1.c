#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	int i, num, num2;
		printf("digite dois n�meros inteiros: \n");
		scanf("%d %d", &num, &num2);

	for (i=num; i<=num2; i++){
		printf("Sua sequ�ncia �: %d\n", i);

	if(num>num2){
		printf("Primeiro n�mero � o maior: %d\n", num);
	}
	if(num2>num){
		printf("Primeiro n�mero � o maior: %d\n", num2);
	}
	}

	system("PAUSE");
	return 0;
}

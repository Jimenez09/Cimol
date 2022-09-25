#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL,"Portuguese_Brazil");
	
	int valor[5], i, soma=0;

	for(i=0; i<5; i++) {
	printf("Digite um valor inteiro:\n ", i+1);
    scanf("%d", &valor[i]);
	soma=soma+valor[i];
	}

printf("A soma total é: %d\n", soma); 
	
system("PAUSE");
return 0;
}

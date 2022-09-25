#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale (LC_ALL,"Portuguese_Brazil");
	float nota=0, soma=0, cont=0, media=0;
	char resp='s';
	
	while (resp!='n'){
		printf("Digite a nota:\n");
		scanf("%f", &nota);
		
		printf("Deseja continuar? s ou n\n");
		scanf("%c", &resp);
		
		soma=soma+nota;
		cont=cont+1;
	}
	
	media=soma/cont;
	printf("A média das notas é: %.2f\n", media);
	
	system("PAUSE");
	return 0;
}

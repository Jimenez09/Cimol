#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	int i, num, soma, cont, media;
	num=0; soma=0; cont=0; media=0;
	for (i=0; i<10; i++){
		printf("Digite um valor: \n");
		scanf("%d", &num);
		
		if(num>0){
		soma=soma+num;
		cont=cont+1;
		}
	}
	media=soma/cont;
	printf("A média dos números positivos é: %d\n", media);
	
	system("PAUSE");
	return 0;
}

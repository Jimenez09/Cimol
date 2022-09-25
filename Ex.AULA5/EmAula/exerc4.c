#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	int i, somap, soman, cont, num;
	num=0, somap=0; soman=0; cont=0;
	for (i=0; i<20; i++){
		printf("Digite o valor: \n");
		scanf("%d", &num);
			if(num>0){
				somap=somap+num;
			}
			if(num<0){
				soman=soman+num;
			}
			if(num==0){
				cont=cont+1;
			}
	}
		printf("A soma dos valores positivos é: %d\n", somap);
		printf("A soma dos valores negativos é: %d\n", soman);
		printf("A quantidade de números zeros é: %d\n", cont);
	
	system("PAUSE");
	return 0;
}

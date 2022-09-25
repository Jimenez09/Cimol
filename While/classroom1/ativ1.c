#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL,"Portuguese_Brazil");
	int x=0, y=0, somap=0, contp=0, cont=0, multi=1;
	printf("Digite dois números:\n");
	scanf("%d %d", &x, &y);
	
	while (x<=y){
		if(x%2==0){
			contp=x;
			somap=somap+contp;
		}
		if(x%2!=0){
			cont=x;
			multi=multi*cont;
		}
		x++;
	}
	printf("A soma dos números pares é: %d\n", somap);
	printf("A multiplicação dos números ímpares é: %d\n", multi);
	printf("Fim do programa!!!\n");
	
	system("PAUSE");
	return 0;
}

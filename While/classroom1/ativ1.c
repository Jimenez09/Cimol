#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL,"Portuguese_Brazil");
	int x=0, y=0, somap=0, contp=0, cont=0, multi=1;
	printf("Digite dois n�meros:\n");
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
	printf("A soma dos n�meros pares �: %d\n", somap);
	printf("A multiplica��o dos n�meros �mpares �: %d\n", multi);
	printf("Fim do programa!!!\n");
	
	system("PAUSE");
	return 0;
}

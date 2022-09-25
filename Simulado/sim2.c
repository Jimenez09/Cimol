#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int num;
	float raiz;
		printf("Digite um número: \n");
		scanf("%d", &num);
		
	if(num>0){
		raiz= sqrt(num);
		printf("A raiz quadrada do número é: %.2f\n", raiz);
	}
	if(num<0){
		printf("Este número é inválido!\n");
	}	
	
	system("PAUSE");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int num;
	float raiz;
		printf("Digite um n�mero: \n");
		scanf("%d", &num);
		
	if(num>0){
		raiz= sqrt(num);
		printf("A raiz quadrada do n�mero �: %.2f\n", raiz);
	}
	if(num<0){
		printf("Este n�mero � inv�lido!\n");
	}	
	
	system("PAUSE");
	return 0;
}

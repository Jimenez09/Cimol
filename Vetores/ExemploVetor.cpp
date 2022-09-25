#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL,"Portuguese_Brazil");
	int numeros[10];
	
	numeros[0]=6;
	numeros[4]=-10;
	
	printf("\nnumeros[0]= %i", numeros[0]);
	printf("\nnumeros[4]= %i", numeros[4]);
	
	printf("\n");
	
	system("PAUSE");
	return 0;
}

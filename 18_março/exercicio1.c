#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float arredondamento;
	float valor;
	
	printf("Digite um valor: \n");
	scanf("%f", &valor);
	arredondamento= floor(valor);
	printf("O valor arredondado para baixo: %f\n", arredondamento);
	
	arredondamento= ceil(valor);
	printf("O valor arredondado para cima: %f\n", arredondamento);
	
	system("PAUSE");
	return 0;
}

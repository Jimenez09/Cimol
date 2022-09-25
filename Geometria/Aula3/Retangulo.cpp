#include <stdio.h>
#include <stdlib.h>

int main()
{
	//programa calcula a area de um retangulo e perimetro
	//declarar as variaveis
	int base, altura, area, perimetro;
	
	//pedir para o usuario os valores
	printf("Digite a base do retangulo: \n");
	scanf("%d", &base);
	printf("Digite a altura do retangulo: \n");
	scanf("%d", &altura);
	
	//fazer o calculo
	area= base*altura;
	perimetro= (2*base)+(2*altura);
	
	//apresentar resultado ao usuario
	printf("A area do retangulo eh?: %d \n", area);
	printf("O perimetro do retangulo eh?: %d \n", perimetro);
	
	system("PAUSE");
	return 0;
}

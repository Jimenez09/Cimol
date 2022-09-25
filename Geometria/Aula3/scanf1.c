#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	//programa calcula a area de umquadrado
	//declarar as variaveis
	int lado, areaquadrado, perimetroquadrado;
	
	//pedir para o usuario o valor do lado
	printf("Digite o valor do lado do quadrado \n");
	scanf("%d", &lado);
	
	//fazer o calculo
	areaquadrado=lado * lado;
	
	//apresentar resultado ao usuario
	printf("Area do quadrado eh: %d \n", areaquadrado);
	
	//calcular perimetro do quadrado
	perimetroquadrado= lado+lado+lado+lado;
	printf("Area do perimetroquadrado eh: %d \n", perimetroquadrado);
	
	system("PAUSE");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	//calcular a area do trapezio
	//declarar as variaveis
	int B, b, altura, area;
	
	//pedir para o usuario os valores
	printf("Digite o valor da Base maior: \n");
	scanf("%d", &B);
	printf("Digite o valor da Base menor: \n");
	scanf("%d", &b);
	printf("Digite o valor da altura: \n");
	scanf("%d", &altura);
	
	//fazer o calculo
	area= ((B+b)*altura)/2;
	
	//apresentar resultado ao usuario
	printf("A area do trapezio e?: %d \n", area);
	
	system("PAUSE");
	return 0;
}

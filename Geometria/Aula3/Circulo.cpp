#include <stdio.h>
#include <stdlib.h>

int main()
{
	//programa calcula a area do circulo
	//declarar as variaveis
	float raio, areacirculo, perimetrocirculo;
	
	//pedir para o usuario os valores
	printf("Digite o valo da raio: \n");
	scanf("%f", &raio);
	
	//fazer o calculo
	areacirculo= 3.14159265*(raio*raio);
	perimetrocirculo= (2*3.14159265*raio);
	
	//apresentar resultado ao usuario
	printf("A area do circulo e?: %d \n", areacirculo);
	printf("O perimetro do circulo e?: %d \n", perimetrocirculo);
	
	system("PAUSE");
	return 0;
}

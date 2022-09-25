//compilaçao: gcc sqrt_pow.c -lm
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

//Calcule a raiz quadrada e a potência

int main (){
	float raiz;
	float potencia;
	float valor;
	
	printf("Digite um valor:");
	scanf("%f", &valor);
	
	raiz= sqrt (valor);
	printf("A raiz quadrada eh? %f\n", raiz);
	
	potencia= pow(valor,2);
	printf("A potencia elevada a 2 eh? %f\n", potencia);
	
	return 0;
}

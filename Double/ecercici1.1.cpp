#include <stdio.h>
#include <math.h>
//compilação: gcc sqrt_pow - lm

int main() {
	
	//declarar as variaveis
	double val1, val2, potencia;
	
	//pedir para os usuarios valores
	printf("Digite o primeiro valor: \n");
	scanf("%lf", &val1);
	printf("Digite o segundo valor: \n");
	scanf("%lf", &val2);
	
	//fazer calculo
	potencia= pow(val1,val2);
	
	//apresentar resultado ao usuario
	printf("O valor 1 elevado ao valor 2 eh?: %.lf", potencia);
	
		
	return 0;
}

#include <stdio.h>
#include <math.h>
//compilação: gcc sqrt_pow - lm

int main() {
	
	//declarar as variaveis
	double val1, val2, potencia;
	
	//atribuir valores
	val1= 2;
	val2= 3;
	
	//fazer calculo
	potencia= pow(val1,val2);
	
	printf("O valor de 2 elevado a 3 eh? %.lf", potencia);
		
	return 0;
}

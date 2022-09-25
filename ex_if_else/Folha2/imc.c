#include <stdio.h>
#include <stdlib.h>

int main() {
	float IMC, peso, altura;
	
		printf("Qual seu peso? \n");
		scanf("%f", &peso);
		printf("Qual sua altura? \n");
		scanf("%f", &altura);
		IMC= peso/(altura*altura);
		printf("Seu IMC eh? %f\n", IMC);
		
	if(IMC<20){
		printf("\nVoce esta abaixo do peso!\n");
	}
	if((IMC>=20)&&(IMC<25)){
		printf("\nSeu peso esta normal!\n");
	}
	if((IMC>=25)&&(IMC<30)){
		printf("\nVoce esta acima do peso!\n");
	}
	if((IMC>=30)&&(IMC<40)){
		printf("\nVoce esta obeso!\n");
	}
	if(IMC>=40){
		printf("\nVoce esta obeso Morbido!\n");
	}
	
	
	return 0;
}

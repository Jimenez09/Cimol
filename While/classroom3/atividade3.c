#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<string.h>
int main(){
	int i=0, sim=0, nao=0, masc=0, fem=0; 
	char genero[1], resposta[4]; 
	float femsim=0, mascnao=0;
	
	printf("Você gostou do produto? \n");
	printf("Digite S-sim ou N-não");
	scanf("%c", &resposta);
	printf("\n");
	printf("Digite F-feminino ou M-masculino");
	scanf("%c", &genero);
	
	for (i=0; i<x; i++){
		scanf("%s %s", &sexo, &resposta);
		if ((strcmp(sexo,"MASCULINO")==0)&&(strcmp(resposta,"SIM")==0)){
			sim++; masc++;
		}
		else if ((strcmp(sexo,"MASCULINO")==0)&&(strcmp(resposta,"NAO")==0)){
			nao++; mascnao++; masc++;
		}
		else if ((strcmp(sexo,"FEMININO")==0)&&(strcmp(resposta,"SIM")==0)){
			sim++; femsim++; fem++;
		}
		else if ((strcmp(sexo,"FEMININO")==0)&&(strcmp(resposta,"NAO")==0)){
			nao++; fem++;
		}
	}
	printf("SIM = %d\n NAO = %d\n", sim, nao);
	printf("FEMININO - SIM = %.2f\n", (femsim*100)/fem);
	printf("MASCULINO - NAO = %.2f\n", (mascnao*100)/masc);
	system("PAUSE");
	return 0;
}

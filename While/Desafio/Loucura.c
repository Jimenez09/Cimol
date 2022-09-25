#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

int main() {
	setlocale (LC_ALL,"Portuguese_Brazil");
	int x, idade=0, op=0, calc=0;
	float altura=0, alt=0, peso=0, fem1=0, fem2=0, masc1=0, masc2=0;
	char genero[1];
	
	printf("Digite '0' para sair!\n" );
	printf("Digite '1' para permanecer!\n" );
    scanf("%d", &x);
    
    while (x!=0){
	    printf("Escolha uma atividade: \n");
	    printf("1- Sedentário \n");
	    printf("2- Literalmente ativo \n");
	    printf("3- Moderado ativo \n");
	    printf("4- Muito ativo \n");
	    printf("5- Extremamente ativo \n");
	    scanf("%d", &op);
	    printf("\n\n");
	    printf("Escolha o cálculo: \n");
	    printf("1- Revised Harris-Benedict \n");
	    printf("2- Mifflin St Jeor \n");
	    scanf("%d", &calc);
	    printf("\n");
	    
		switch(calc){
			case 1:
				printf("Digite sua idade: \n");
			    scanf("%d", &idade);
			    printf("Digite seu peso: \n");
			    scanf("%f", &peso);
			    printf("Digite sua altura: \n");
			    scanf("%f", &altura);
			    printf("Digite seu sexo: \n");
			    printf("M - Masculino! \n");
			    printf("F - Feminino! \n");
			    scanf("%s", &genero);
			    scanf("*c");
			    
			    	if((strcmp(genero,"f")==0) || (strcmp(genero,"F")==0)){
			    		fem1=655.09+(9,563*peso)+(1,85*alt)-(4,676*idade);
			    		printf("Cálculo: %.4f\n", fem1);
					}
					else if((strcmp(genero,"m")==0) || (strcmp(genero,"M")==0)){
			    		masc1=66,47+(13,75*peso)+(5,003*alt)-(6,775*idade);
			    		printf("Cálculo: %.4f\n", masc1);
					}
					
				printf("\n");
			break;
			
			case 2:
				printf("Digite sua idade: \n");
			    scanf("%d", &idade);
			    printf("Digite seu peso: \n");
			    scanf("%f", &peso);
			    printf("Digite sua altura: \n");
			    scanf("%f", &altura);
			    printf("Digite seu sexo: \n");
			    printf("M - Masculino! \n");
			    printf("F - Feminino! \n");
			    scanf("%s", &genero);
			    scanf("*c");
			    
			    	if((strcmp(genero,"f")==0) || (strcmp(genero,"F")==0)){
			    		fem2=(10*peso)+(6,25*alt)-(5*idade)-161;
			    		printf("Cálculo: %.4f\n", fem2);		    		
					}
					else if((strcmp(genero,"m")==0) || (strcmp(genero,"M")==0)){
			    		masc2=(10*peso)+(6,25*alt)-(5*idade);
			    		printf("Cálculo: %.4f\n", masc2);		    		
					}
					
				printf("\n");
			break;
		} 
	printf("Digite '0' para sair!\n" );
	printf("Digite '1' para permanecer!\n" );
    scanf("%d", &x);
	}
    
	system("PAUSE");
	return 0;
}

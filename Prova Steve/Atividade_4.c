#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
float alt, peso, alt, imc, cal=0;
void fimc();
void fcal();
	int main() {
		setlocale (LC_ALL,"Portuguese_Brazil");
	int op;

		printf("Digite uma das op��es: \n");
		printf("1- IMC \n");
		printf("2- Funcao atividade f�sica \n");
		scanf("%d", &op);
		printf("\n");

    	switch (op){
	    	case 1:
		        printf("Digite seu peso: \n");
		        scanf("%f", &peso);
		        printf("Digite sua altura: \n ");
		        scanf("%f", &alt);
		        fimc();
		    break;
	
		    case 2:
		        printf ("Digite a quantas calorias que voc� consumiu: \n");
		        scanf("%f", &cal);
		
		        if (cal==310){
		        printf("T�nis de mesa %f \n", cal);
		        }
		        if (cal==320){
		        printf("Caminhada %f \n", cal);
		        }
		
		        if (cal==490){
		            printf("Ciclismo %f \n ", cal);
		        }
		        if (cal==500){
		            printf("Esgrima %f \n", cal);
		        }
		
		        if (cal==500){
		            printf("T�nis %f \n", cal);
		        }
		
		        if (cal==500){
		            printf("Halterofilismo %f \n", cal);
		
		        }
		        if (cal==500){
		            printf("V�lei %f \n", cal);
		        }
		
		        if (cal==510){
		            printf("Esqui %f \n", cal);
		        }
		        
		        if (cal==530){
		            printf("Corrida (8km/h) %f \n", cal);
		        }
		    	fcal();
		    break;
		    
		    default:
    		printf("Volte sempre!!! \n");
		}
		system("PAUSE");
		return 0;
	}
void fimc(){
    imc=peso/(alt*alt);
    printf ("o seu IMC: %.2f \n", imc);}

void fcal(){
    printf ("calorias %.2f \n", cal);
    }

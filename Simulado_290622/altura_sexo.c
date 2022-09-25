#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL,"Portuguese_Brazil");
	
	int sexo, i, contf, contm;
	float alt, somaltf=0, somaltm=0, vetalt[10], maior=0, menor=0, medialt=0, maior1=0, menor1=0;
	
	for(i=0; i<10; i++){
		printf("Digite: \n");
		printf("0 - Feminino \n");
		printf("1 - Masculino \n");
		printf("\n");
		scanf("%d", &sexo);
		printf("\n");
		
		if(sexo==0){
		  contf=contf+1; 
          printf ("Digite sua altura: \n");
          scanf("%f", &alt);
          somaltf=somaltf+alt; 
            if(alt>maior){
            maior=alt;
            	if(menor==0){
            		menor=alt;
        		}
			}
			if(alt<menor){
             menor=alt;
            } 
		}
		if(sexo==1){
            contm=contm+1;  
            printf ("Digite sua altura: \n");
            scanf("%f", &alt);
	          if(alt>maior1){
	            maior1=alt;
	            if(menor1==0){
	               menor1=alt;
	            }
	        } 
		}
	}
	printf("\n");
	medialt=somaltf/contf;
    printf("Media das alturas femininas:%2.f\n", medialt);
    printf("Quantidade de mulheres:%d\n", contf);
    printf("Quantidade de homens:%d\n", contm);
    printf("Maior altura mulheres:%f\n", maior);
    printf("Menor altura mulheres:%f\n", menor);
    printf("Maior altura homens:%f\n", maior1);
    printf("Menor altura homens:%f\n", menor1);
    
system("PAUSE");
return 0;
}

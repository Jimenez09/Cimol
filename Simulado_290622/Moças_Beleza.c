#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL,"Portuguese_Brazil");
	
	float alt, maior=0, menor=0;
  	int cont=0;
  	printf("Digite a altura: \n");
    scanf("%f", &alt);
    printf("\n");
    
    while(alt!=0){
	cont=cont+1;             
   	printf("Digite a altura: \n");
   	scanf("%f", &alt);
	printf("\n");
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
  
  printf("Quantidade de candidatas: %d\n", cont);  
  printf("Maior candidata: %f\n", maior);  
  printf("Menor candidata: %f\n", menor);
	
	system("PAUSE");
	return 0;
}

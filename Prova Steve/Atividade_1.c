#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL,"Portuguese_Brazil");
	
	int idade, cont;
		printf("Digite sua idade e descubra sua classe eleitoral! \n");
		scanf("%d", &idade);
	
	while (idade!=0){
		
		if((idade<16)&&(idade<18)){
		printf("\nEleitor facultativo!\n");
		}
		if((idade>=18)&&(idade<65)){
		printf("\nEleitor obrigatorio!\n");
		}
		if(idade>65){
		printf("\nEleitor facultativo!\n");
		}
		else{
		printf("\nNão eleitor!\n");
		}
		printf("Digite sua idade e descubra sua classe eleitoral! \n");
		scanf("%d", &idade);
		cont=cont+1;
	}
	
	printf("A quantidade de elitores é: %d \n", cont);
	system("PAUSE");
	return 0;
}

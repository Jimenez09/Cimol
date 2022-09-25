#include <stdio.h>
#include <stdlib.h>

int main() {
	int idade;
		printf("Digite sua idade e descubra sua classe eleitoral! \n");
		scanf("%d", &idade);
		
	if(idade<16){
		printf("\nNao eleitor!\n");
	}
	if((idade>=18)&&(idade<65)){
		printf("\nEleitor obrigatorio!\n");
	}
	else{
		printf("\nEleitor facultativo!\n");
	}
	
	system("pause");
	return 0;
}

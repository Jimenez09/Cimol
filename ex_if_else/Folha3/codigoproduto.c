#include <stdio.h>
#include <stdlib.h>

int main() {
	int codigo;
		printf("Digite o codigo do produto:\n");
		scanf("%d", &codigo);
		
	if(codigo==1){
		printf("\nAlimento nao perecivel!\n");
	}
	if((codigo>=2)&&(codigo<=4)){
		printf("\nAlimento perecivel!\n");
	}
	 if((codigo>=5)&&(codigo<=6)){
		printf("\nVestuario!\n");
	}
	 if(codigo==7){
		printf("\nHigiene pessoal!\n");
	}
	 if ((codigo>=8)&&(codigo<=10)){
		printf("\nUtensilios domesticos!\n");
	}
	else if
	(codigo>=11){
		printf("\nEste codigo nao existe!\n");
	}
	system("pause");
	return 0;
}

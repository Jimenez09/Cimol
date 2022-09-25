#include <stdio.h>
#include <stdlib.h>

int main() {
	int dia;
	
	printf("Digite um numero de 1 a 7 para saber o dia da semana! \n");
	scanf("%d", &dia);
	
	if(dia==1){
		printf("\nO dia da semana eh Domingo!!\n");
	}
	if(dia==2){
		printf("\nO dia da semana eh Segunda-feira!!\n");
	}
	if(dia==3){
		printf("\nO dia da semana eh Terca-feira!!\n");
	}
	if(dia==4){
		printf("\nO dia da semana eh Quarta-feira!!\n");
	}
	if(dia==5){
		printf("\nO dia da semana eh Quinta-feira!!\n");
	}
	if(dia==6){
		printf("\nO dia da semana eh Sexta-feira!!\n");
	}
	if(dia==7){
		printf("\nO dia da semana eh Sabado!!\n");
	}
	if((dia!=1)&&(dia!=2)&&(dia!=3)&&(dia!=4)&&(dia!=5)&&(dia!=6)&&(dia!=7)){
		printf("\nEste dia da semana nao existe!!\n");	
	}
	
	system("pause");
	return 0;
}

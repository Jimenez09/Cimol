#include <stdio.h>
#include <stdlib.h>

int main() {
	float salario, bonus, totalsal;
	int tempo;
	
		printf("Quanto tempo voce tem de profissao? \n ");
		scanf("%d", &tempo);
		printf("Qual o valor do nseu salario? \n");
		scanf("%f", &salario);
		
		if(tempo>=5){
			bonus=salario*0.2;
			totalsal=salario+bonus;
			printf("Salario reajustado eh %.2f\n", totalsal);
			printf("Bonus recebido eh %.2f\n", bonus);
		}
		else if(tempo<5){
			bonus=salario*0.1;
			totalsal=salario+bonus;
			printf("Salario reajustado eh %.2f\n", totalsal);
			printf("Bonus recebido eh %.2f\n", bonus);
		}
		system("pause");
		return 0;
}

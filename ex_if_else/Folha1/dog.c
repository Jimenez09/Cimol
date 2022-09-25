#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char pelagem, altura, peso, vida;
	printf("Possui pelagem curta s-sim ou n-nao? \n");
	scanf("%c", &pelagem);
	scanf("%*c");
	printf("Possui altura superior a 50cm s-sim ou n-nao? \n");
	scanf("%c", &altura);
	scanf("%*c");
	printf("Possui peso superior a 50kg curta s-sim ou n-nao? \n");
	scanf("%c", &peso);
	scanf("%*c");
	printf("Possui expectativa de vida inferior de 10 anos s-sim ou n-nao? \n");
	scanf("%c", &vida);
	
	if((pelagem=='s')&&(altura=='s')&&(peso=='s')&&(vida=='n')){
		printf("\nA raca do cachorro escolhido foi Dalmata!!\n");
	}
	if((pelagem=='n')&&(altura=='s')&&(peso=='n')&&(vida=='n')){
		printf("\nA raca do cachorro escolhido foi Pastor Alemao!!\n");
	}
	if((pelagem=='s')&&(altura=='n')&&(peso=='n')&&(vida=='s')){
		printf("\nA raca do cachorro escolhido foi Buldog Ingles!!\n");
	}
	if((pelagem=='s')&&(altura=='n')&&(peso=='n')&&(vida=='n')){
		printf("\nA raca do cachorro escolhido foi Bull Terrier!!\n");
	}
	if((pelagem=='n')&&(altura=='s')&&(peso=='s')&&(vida=='n')){
		printf("\nA raca do cachorro escolhido foi Labrador!!\n");
	}
	if((pelagem=='n')&&(altura=='s')&&(peso=='s')&&(vida=='n')){
		printf("\nA raca do cachorro escolhido foi Sao Bernardo!!\n");
	}
	if((pelagem=='n')&&(altura=='s')&&(peso=='n')&&(vida=='s')){
		printf("\nA raca do cachorro escolhido foi Chow Chow!!\n");
	}
	if((pelagem=='n')&&(altura=='n')&&(peso=='n')&&(vida=='n')){
		printf("\nA raca do cachorro escolhido foi Pequines!!\n");
	}
	if((pelagem=='n')&&(altura=='n')&&(peso=='n')&&(vida=='n')){
		printf("\nA raca do cachorro escolhido foi Cocker Ingles!!\n");
	}
	
	system("pause");
	return 0;
}

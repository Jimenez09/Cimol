#include <stdio.h>
#include <stdlib.h>

//programa vai solicitar dois valores, fazer a soma, pedir o salario do usuario
//pedir primeira letra do nome
int main() {
	
	int num1, num2, soma;
	float salario;
	char letra;
	printf("Qual a primeira letra do seu nome? \n");
	scanf("%c", &letra);
	printf("Digite um valor \n");
	scanf("%d", &num1);
	printf("Digite o segundo valor \n");
	scanf("%d", &num2);
	soma= num1+num2;
	printf("Qual o valor do salario? \n");
	scanf("%f", &salario);

	//apresentar os resultados
	printf("A soma dos valores eh: %d\n", soma);
	printf("Seu salario eh: %.2f \n", salario);
	printf("A letra inicial do seu nome eh: %c \n", letra);
	
	system("PAUSE");
	return 0;
}

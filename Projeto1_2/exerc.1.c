#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	//declarar variaveis
	int num1, num2, soma, subtracao;
	
	//atribuir valores
	num1=10;
	num2=20;
	
	//fazer a soma e subtracao
	soma=num1+num2;
	subtracao=num2-num1;
	
	//imprimir conteudo das variaveis soma e subtracao
	printf("A soma total eh: %d \n*", soma);
	printf("A subtracao total eh: %d \n", subtracao);
	
	system("PAUSE");
	return 0;
}

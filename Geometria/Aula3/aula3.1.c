#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	//declarar variaveis
	int val1,val2, soma, sub, mult, div;
	
	//atribuir valores
	val1= 10;
	val2= 20;
	
	//fazer os calculos
	soma= val1+val2;
	sub= soma-val1;
	mult= soma*2;
	div= soma/2;
	
	//apresentar resultado
	printf("Soma Total: %d \n", soma);
	printf("Subtraçao Total: %d \n", sub);
	printf("Multiplicacao Total: %d \n", mult);
	printf("Divisao Total: %d \n", div);
	
	system("PAUSE");
	return 0;
}

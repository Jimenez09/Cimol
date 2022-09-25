#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int tempo, anoprofissao, idade, anonascimento;
	float IMC, peso, altura;
	char primeironome[10];
	char nomecompleto[25];
	char profissao[30];
	
	printf("Digite seu nome completo:\n", nomecompleto);
	gets(nomecompleto);
	printf("Digite seu primeiro nome:\n");
	scanf("%s", &primeironome[0]);
	printf("A quarta letra do seu nome? %c\n", primeironome[3]);
	
	printf("Seu ano de nascimento eh:\n");
	scanf("%d", &anonascimento);
	idade= 2022-anonascimento;
	printf("Voce tem %d anos \n", idade);
	
	printf("Qual sua profissao?\n", profissao);
	scanf("%s", profissao);
	printf("Em que ano voce iniciou nessa profissao?\n");
	scanf("%d", &anoprofissao);
	tempo= 2022-anoprofissao;
	printf("Voce tem %d anos de profissao\n", tempo);
	
	printf("Qual seu peso? \n");
	scanf("%f", &peso);
	printf("Qual sua altura? \n");
	scanf("%f", &altura);
	IMC= peso*(altura*altura);
	printf("Seu IMC eh? %f\n", IMC);
	
	printf("O nome digitado eh: %s\n", primeironome);
	printf("O nome completo eh: %s\n", nomecompleto);
		
	system("PAUSE");
	return 0;
}

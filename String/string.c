#include <stdio.h>
#include <stdlib.h>

int main() 
{
	char nome[7];
	char nomecompleto[20];
	
	//exemplo gets
	printf("Digite seu nome completo: %s\n", nomecompleto);
	gets(nomecompleto);
	
	//exemplo string
	printf("Digite seu nome:\n");
	scanf("%s", &nome[0]);
	
	printf("O nome digitado eh: %s\n", nome);
	printf("O nome completo eh: %s\n", nomecompleto);
		
	printf("A primeira letra do nome eh: %c\n", nome[0]);
	printf("A segunda letra do nome eh: %c\n", nome[1]);
	printf("A ultima letra do nome eh: %c\n", nome[4]);

	
	system("PAUSE");
	return 0;
}

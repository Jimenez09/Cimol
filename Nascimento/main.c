#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int idade, dianascimento, mesnascimento, anonascimento;
	printf("Digite sua idade \n");
	scanf("%d", &idade);
	printf("Seu dia de nascimento eh: \n");
	scanf("%d", &dianascimento);
	printf("Seu mes de nascimento eh: \n");
	scanf("%d", &mesnascimento);
	printf("Seu ano de nascimento eh: \n");
	scanf("%d", &anonascimento);
	printf("Voce tem %d anos \n", idade);
	printf("Sua data de nascimento eh %d/%d/%d \n", dianascimento, mesnascimento, anonascimento);
	
	system("PAUSE");
	return 0;
}

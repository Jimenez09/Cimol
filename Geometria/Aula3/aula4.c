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
	
	printf("A idade do usuario eh: %d \n", idade);
	printf("O dia de nascimento do usuario eh: %d \n", dianascimento);
	printf("O mes de nascimento do usuario eh: %d \n", mesnascimento);
	printf("O ano de nascimento do usuario eh: %d \n", anonascimento);
	
	sistem("PAUSE");
	return 0;
}

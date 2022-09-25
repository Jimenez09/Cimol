#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL,"Portuguese_Brazil");
	float nota1, nota2, media=0;
	int resp;
	do{
	printf("Digite a 1º nota:\n");
	scanf("%f", &nota1);
	printf("Digite a 2º nota:\n");
	scanf("%f", &nota2);
	media=(nota1+nota2)/2;
	printf("Média do aluno: %.2f\n", media);
	printf("Digite 1para continuarm ou 2 para sair!\n");
	scanf("%d", &resp);
	
	}while(resp==1);
	
	system("PAUSE");
	return 0;
}

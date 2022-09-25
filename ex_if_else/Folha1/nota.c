#include <stdio.h>
#include <stdlib.h>

int main(){
	float nota1, nota2, nota3, nota4, media;
	int frequencia;
	
	printf("Digite as quatro notas bimestrais: \n");
	scanf("%f%f%f%f", &nota1, &nota2, &nota3, &nota4);
	
	media= (nota1+nota2+nota3+nota4/4);
	
	printf("Digite sua frequencia: \n");
	scanf("%d", &frequencia);
	
	if(media<5){
		printf("\nReprovado!\n");
	}
	if((media>=5)&&(media<7)&&(frequencia>=75)){
		printf("\nrecuperacao!\n");
	}
	if((media>=7)&&(frequencia>=75)){
		printf("\nAprovado!\n");
	}
	
	system("pause");
	return 0;
}

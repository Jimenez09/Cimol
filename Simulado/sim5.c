#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int idade;
		printf("Digite sua idade e descubra sua categoria!\n");
		scanf("%d", &idade);
	
	if((idade>=5)&&(idade<=7)){
		printf("Sua categoria � Infantil A!\n");
	}
	if((idade>=8)&&(idade<=10)){
		printf("Sua categoria � Infantil B!\n");
	}
	if((idade>=11)&&(idade<=13)){
		printf("Sua categoria � Juvenil A!\n");
	}
	if((idade>=14)&&(idade<=17)){
		printf("Sua categoria � Juvenil B!\n");
	}
	if(idade>=18){
		printf("Sua categoria � S�nior!\n");
	}

	
	system("PAUSE");
	return 0;
}

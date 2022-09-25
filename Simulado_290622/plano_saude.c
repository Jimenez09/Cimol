#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL,"Portuguese_Brazil");

    int idade, preco;

    printf("Diga sua idade: \n");
    scanf("%d",&idade);

    if(idade<=10){
        preco=30;
    }

    if((idade>10)&&(idade<=29)){
        preco=60;
    }

    if((idade>29)&&(idade<=45)){
        preco=120;
    }

    if((idade>45)&&(idade<=59)){
        preco=150;
    }

    if((idade>59)&&(idade<=65)){
        preco = 250;
    }

    if(idade>65){
        preco=400;
    }

    printf("Valor do seu plano: R$ %d \n", preco);
	
	system("PAUSE");
	return 0;
}

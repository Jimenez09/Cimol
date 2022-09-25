#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	
void celsius();
void faren();
int opcao;
float temp, total, total1;

int main(){
	setlocale (LC_ALL,"Portuguese_Brazil");
    printf("Escola qual conversão de temperatura voce deseja? \n");
    printf("0 - Sair!!! \n");
    printf("1 - Celsius para fahrenheit \n");
    printf("2 - Fahrenheit para Celsius \n");
    printf("\n");
    scanf("%d", &opcao);
    printf("\n");
    
    switch(opcao){
    	case 1:
           printf("Digite a temperatura:\n");
           scanf("%d", &temp);
           celsius();
     	break;
     	
     	case 2:
           printf("Digite a temperatura:\n");
           scanf("%d", &temp);
           faren();
    	break;
    	
    	default:
    		printf("Volte sempre!!! \n");
    }
	
	system("PAUSE");
	return 0;
}
void faren(){
	total=(temp*9/5)+32;

}

void celsius(){
	total=(temp-32)*5/9;
}

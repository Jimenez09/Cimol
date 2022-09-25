#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL,"Portuguese_Brazil");
	int num=0, gasolina=0, alcool=0, diesel=0;
	printf("Digite um código do comburstível:\n");
	scanf("%d", &num);
	
	while (num!=4){
		
		if (num==1){
			alcool+=1;
			
		}else if (num==2){
			gasolina+=1;
			
		}else if (num==3){
			diesel+=1;
		}
		scanf("%d", &num);
	}
	printf("Muito obrigado!!!\n");
	printf("Álcool: %d\n", alcool);
	printf("Gasolina: %d\n", gasolina);
	printf("Diesel: %d\n", diesel);
	
	system("PAUSE");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	int i, num, somap, soman, contp, contn;
	i=0; num=0; somap=0; soman=0; contp=0; contn=0;
	for (i=0; i<10; i++){
		printf( "Digite os valores: \n");
		scanf("%d", &num);
			if(num>0){
				contp=contp+1;
			}
			if(num<0){
				contn=contn+1;
			}
			if(num>=0){
				somap=somap+num;
			}
			if(num<0){
				soman=soman+num;
			}
}
		printf("A quantidade de n�meros igual ou maior que '0' �: %d\n", contp);
		printf("A quantidade de n�meros menor que '0' �: %d\n", contn);
		printf("A soma dos valores positivos �: %d\n", somap);
		printf("A soma dos valores negativos �: %d\n", soman);
	system("PAUSE");
	return 0;
}

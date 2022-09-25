#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
	setlocale (LC_ALL,"Portuguese_Brazil");

	 char t[1];
	 int num=0, cont=0, rato=0, sapo=0, soma=0, cob=0, quant=0, quantc=0, teste, percoelho=0;
	 
	 printf("Quantos casos de testes serão digitados?\n");
	 scanf("%d", &num);
	 
	 
	 while(num!=quant){
		 printf("Tipo de cobaia:\n C-coelho\n R-rato\n S-sapo\n");
		 scanf("%s", &t);
	//	 scanf("%*c");		
		 printf("Quantidade de cobaias:\n");
		 scanf("%d", &cob);
		
		if ((strcmp(t,"c")==0)||(strcmp(t,"C")==0)){
			 cont=cont+1;
	  		}
		else if ((strcmp(t,"r")==0)||(strcmp(t,"R")==0)){
		     rato=rato+1;
		 	}
		else if ((strcmp(t,"s")==0)||(strcmp(t,"S")==0)){
		     sapo=sapo+1;
		 	}
	soma=soma+cob;	 
	quant=quant+1;
	 }
 printf("\n\n");
 printf("Total: %d cobaias\n", soma);
 printf("Total de coelhos: %d \n", cont);
 printf("Total de ratos: %d\n", rato);
 printf("Total de sapos: %d\n", sapo);
 printf("\n\n");
 printf("Percentual de coelhos: %.2f %\n", (float)cont * 100.0 / soma);
 printf("Percentual de ratos: %.2f %\n", (float)rato * 100.0 / soma);
 printf("Percentual de sapos: %.2f %\n", (float)sapo * 100.0 / soma);
 
system("PAUSE");
return 0;
}

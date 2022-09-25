#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

int main() {
	setlocale (LC_ALL,"Portuguese_Brazil");
	int x, contf=0, contm=0;
	float h, mediaf=0, somaf=0;
	char sexo[1];
	

    printf("Digite '0' para sair e '1' para permanecer!\n" );
    scanf("%d", &x);
    
    while (x!=0){
	    printf("Digite sua altura: \n");
	    scanf("%f", &h);
	    printf("Digite seu sexo: \n");
	    printf("M - Masculino! \n");
	    printf("F - Feminino! \n");
	    scanf("%s", &sexo[1]);
	    scanf("*c");
	
	
    if((strcmp(sexo,"M")==0)||(strcmp(sexo,"m")==0)){
    contm=contm+1;
    }
    
    if((strcmp(sexo,"F")==0)||(strcmp(sexo,"f")==0)){
    contf=contf+1;
    somaf=somaf+h;
    }
  
    printf("Digite '0' para sair e '1' para permanecer!\n" );
    scanf("%d", &x);
}
mediaf=somaf/contf;

printf("A média da altura das mulheres: %.2f\n", mediaf);
printf("Número de homens: %d\n", contm);
printf("Números de mulheres: %d\n", contf);
	
	system("PAUSE");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale (LC_ALL,"Portuguese_Brazil");
int candidato=0, cand1=0, cand2=0, cand3=0, nulo=0, branco=0, venc=0, soma=0;

	printf("Vote no candidato: \n");
	printf("1- Paulo de Jesus \n");
	printf("2- Carlos Luz \n");
	printf("3- Neves Rocha \n");
	printf("4- Nulo \n");
	printf("5- Branco \n");
	printf("6- Sair! \n");
	
while (candidato!=6){
	
	if (candidato==1);
		cand1=cand1+1;
		
	if (candidato==2);
		cand2=cand2+1;
		
	if (candidato==3);
		cand3=cand3+1;
		
	if (candidato==4);
		nulo=nulo+1;
		
	if (candidato==5);
		branco=branco+1;
	
	if ((candidato!=1)&&(candidato!=2)&&(candidato!=3)&&(candidato!=4)&&(candidato!=5)){
		printf("Voto Inválido!!\n");
	}
	
	soma=soma+candidato;
}
printf("Contagem de votos: \n");
print("Paulo Jesus teve %.2f votos! \n", cand1);
print("Carlos Luz teve %.2f votos! \n", cand2);
print("Neves Rocha teve %.2f votos! \n", cand3);

	if ((cand1>cand2)&&(cand1>cand3)){
		printf("Paulo Jesus foi o candidato mais votado!\n");
	}
	if ((cand2>cand1)&&(cand2>cand3)){
		printf("Carlos Luz foi o candidato mais votado!\n");
	}
	if ((cand3>cand1)&&(cand3>cand2)){
		printf("Neves Rocha foi o candidato mais votado!\n");
	}
	
	printf("Porcentagem de votos nulos: %.2f \n", (float)nulo*100/soma);
	printf("Porcentagem de votos brancos: %.2f \n", (float)branco*100/soma);
	
	system("PAUSE");
	return 0;
}

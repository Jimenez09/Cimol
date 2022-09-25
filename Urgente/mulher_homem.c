#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL,"Portuguese_Brazil");
	
	int main() {

int idade, peso=0, sexo,cont=0, mediapesoM=0,numH=0,numM=0;
float altura=0,mediaaltH=0, menor=0, maior=0;

while(cont!=8){


printf("Qual o sexo:\n");
printf("\n");
printf("1- masculino\n");
printf("0- feminino\n");
scanf("%d",&sexo);
printf("Qual sua idade:\n");
scanf("%d", &idade);
printf("Qual seu peso:\n");
scanf("%d", &peso);
printf("Qual sua altura:\n");
scanf("%f", &altura);
cont=cont+1;

      if(altura>maior){
            maior=altura;
            if(menor==0){
               menor=altura;
            }
          }
          if(altura < menor){
             menor=altura;
          }

 if(sexo==0){
  mediapesoM=peso/cont;
 }
 if(sexo==1){
  numH=cont;
 }
 if(sexo==1){
  mediaaltH=altura/cont;
 }
 if (sexo==0&&peso>=75){

  numM=cont;
 }

  }


  printf("Quantidade de homens:%d\n", numH);
  printf("Maior altura:%.2f\n", maior);
  printf("Menor altura:%.2f\n", menor);
  printf("Media de peso das mulheres:%d\n",mediapesoM);
  printf("Media altura dos homens:%.2f\n",mediaaltH);
  printf("Numero de mulheres com peso maior que 75: %d \n", numM);

system("pause");
return 0;
}

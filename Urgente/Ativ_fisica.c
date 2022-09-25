#include <stdio.h>
#include <stdlib.h>


float alt, peso, alt, imc, calo=0;
void fimc();
void fcalo();
int main(){
int op;

printf ("Digite o que deseja fazer  \n 0-IMC \n 1-Funcao atividade fisica\n");
scanf ("%d", &op);

    switch (op){
    case 0:
        printf ("Digite seu peso: \n");
        scanf ("%f", &peso);
        printf ("Digite sua altura: \n ");
        scanf ("%f", &alt);
        fimc();


    case 1:
        printf ("Digite a quantas calorias voce ingeriu: \n");
        scanf ("%f", &calo);

        if (calo>=200 && calo<=300){
        printf ("Caminhar %f \n", calo);
        }
        if (calo>=600 && calo<=800){
        printf ("Corrida %f\n", calo);
        }

        if (calo==1000){
            printf ("Pular %f\n ", calo);
        }
        if (calo>=650 && calo<=1000){
            printf ("pedalar %f\n", calo);
        }

        if (calo>=800 && calo<=950){
            printf ("Remar %f \n", calo);
        }

        if (calo>=500 && calo<=600){
            printf ("transport %f \n", calo);

        }
        if (calo>=600 && calo<=800){
            printf ("nadar %f \n", calo);
        }

        if (calo>=400 && calo<=800){
            printf ("lutar %f \n", calo);
        }

    }

fcalo();
return 0;
}
void fimc(){
    imc=peso/(alt*alt);
    printf ("o seu IMC: %.2f \n", imc);}

void fcalo(){
    printf ("calorias %.2f \n", calo);
    }

#include <stdio.h>
#include <stdlib.h>


int main() {

int i, vetA[2], vetB[2], vetC[2], vetD[2];

for(i=0;i<2;i++){
printf("Digite os valores de A :\n");
scanf("%d", &vetA[i]);

}


for(i=0;i<2;i++){
printf("Digite os valores de B:\n");
scanf("%d", &vetB[i]);

}

for(i=0;i<2;i++){

vetC[i]=vetA[i] + vetB[i];
printf("Valores de C vetC[%d]=%d\n",i, vetC[i]);

}

for(i=0;i<2;i++){

vetD[i]=vetA[i] * vetB[i];
printf("Valores de D vetD[%d]=%d\n",i, vetD[i]);

}

system("pause");
return 0;
}

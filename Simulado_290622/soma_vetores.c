#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL,"Portuguese_Brazil");
	
	 int vetR[5], vetS[10], vetX[15], i, i2=5;
    for(i=0;i<5;i++){
      printf("Digite um valor para o vetorR[%d]:", i);
      scanf("%d", &vetR[i]);
      printf("\n");
    }
    for(i=0;i<10;i++){
      printf("Digite um valor para o vetorS[%d]:", i);
      scanf("%d", &vetS[i]);
      printf("\n");
    }
    for(i=0;i<5;i++){
      vetX[i]=vetR[i];
    }
    for(i=0;i<10;i++){
      vetX[i2]=vetS[i];
      i2=i2+1;
    }
    for(i=0;i<15;i++){
     printf("Impressao vetX[%d]=%d\n", i, vetX[i]);
    }
	
	system("PAUSE");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL,"Portuguese_Brazil");
	
	int vetD[10], vetE[10], i=0, i2=0;
    
    for(i=0;i<10;i++){
      printf("Digite valor do número para o vetor: \n", i);
      scanf("%d", &vetD[i]);
    }
    for(i=0;i<10;i++){
      printf("Impressao vetorD[%d]=%d \n", i, vetD[i]);
    }
    for(i=9; i>=0; i--){
       vetE[i2]=vetD[i];
       i2=i2+1;
    }
     for(i=0;i<10;i++){
      printf("Impressao vetorE[%d]=%d \n", i, vetE[i]);
    }
	
	system("PAUSE");
	return 0;
}

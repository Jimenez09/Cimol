#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	int i, num;
		printf(" Digite dois valores inteiros: \n");
		scanf("%d %d", &i, &num);
		
	for (i<num; i<=num; i++){
		
	if(i%2==0){
		printf("Os n�mero pares s�o: %d\n", i);
	}else{
		printf("Os n�mero �mpares s�o: %d\n", i);
	}
	}

	system("PAUSE");
	return 0;
}

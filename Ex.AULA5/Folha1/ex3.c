#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int i, num, num2;
		printf(" Digite dois valores inteiros: \n");
		scanf("%d %d", &num, &num2);
	
	for (i=num; i<=num2; i++){
		printf("Sua sequ�ncia �: %d\n", i);
	}
	
	system("PAUSE");
	return 0;
}

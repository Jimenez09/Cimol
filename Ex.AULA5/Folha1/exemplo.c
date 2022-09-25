#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int i;
	for(i=0; i<=10; i++){
	printf("Entrei no laço: %d\n",i);
	}
	system("PAUSE");
	return 0;
}

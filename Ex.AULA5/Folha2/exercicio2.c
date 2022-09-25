#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int a, b;
	for (a=100, b=300; a<=b; a++){
		if(a %2 !=0){
		printf("Sequência: %d\n", a);
	}
	}
	
	system("PAUSE");
	return 0;
}

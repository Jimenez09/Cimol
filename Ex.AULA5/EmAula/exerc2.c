#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	int i;
	for (i=10; i>=0; i--){
		printf("Sequência: %d\n", i);
	}

	system("PAUSE");
	return 0;
}

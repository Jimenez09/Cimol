#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");

	int num;
	float raiz, pot;
		printf("Digite um n�mero: \n");
		scanf("%d", &num);

		raiz= sqrt(num);
		pot=pow(num,2);
		printf("A raiz quadrada do n�mero �: %.2f\n", raiz);
        printf("Pot�ncia: %.2f\n", pot);

	system("PAUSE");
	return 0;
}

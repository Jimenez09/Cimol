#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int num;
	printf("Digite o primeiro valor: \n");
	scanf("%d", &num);
	
	if(num%2==0){
		printf("\nO numero digitado eh par! \n");
	}else{
		printf("\nO numero digitado eh impar! \n");
	}
	system("pause");
	return 0;
}

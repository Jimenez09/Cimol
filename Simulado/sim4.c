#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
int dist, litros;
float kml;
	
	printf("Digite a Km percorrida:\n");
	scanf("%d", &dist);
	printf("Digite a quantidade de litros consumidos:\n");
	scanf("%d", &litros);
	
	kml=dist/litros;
	printf("Seu ve�culo faz %.2f Km/l!\n", kml);
	
	if(kml<8){
		printf("Venda o carro!\n");
	}
	if((kml>=8)&&(kml==14)){
		printf("Seu ve�culo � econ�mico!\n");
	}
	if(kml>12){
		printf("Seu ve�culo � Super Econ�mico!\n");
	}
	
	system("PAUSE");
	return 0;
}

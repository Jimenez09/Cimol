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
	printf("Seu veículo faz %.2f Km/l!\n", kml);
	
	if(kml<8){
		printf("Venda o carro!\n");
	}
	if((kml>=8)&&(kml==14)){
		printf("Seu veículo é econômico!\n");
	}
	if(kml>12){
		printf("Seu veículo é Super Econômico!\n");
	}
	
	system("PAUSE");
	return 0;
}

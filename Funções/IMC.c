#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int op, op1, quant, total, resp; 
int cal1, cal2, cal3, cal4, cal5, cal6, cal7, cal8, cal9, cal10, cal11, cal12, cal13, cal14, cal15;
float imc, peso, altura;
void IMC();
void CAL();

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	printf("Escolha o cálculo:\n");
	printf("1- IMC      \n");
	printf("2- Calorias \n");
	printf("3- Sair!!!  \n");
	scanf("%d", &op);
		
	switch (op){
		case 1:
			printf("Digite seu peso: \n");
			scanf("%f", &peso);
			printf("Digite sua altura: \n");
			scanf("%f", &altura);
			IMC();
		break;
		
		case 2:
			printf("Lista de alimentos com calorias para escolha: \n");
			printf("1-Pão de queijo                   = 200 calorias \n");
			printf("2-Empadinha de palmito            = 200 calorias \n");
			printf("3-Pipoca de panela (1 xícara)     =  70 calorias \n");
			printf("4-Salgadinhos (1xícara)           = 100 calorias \n");
			printf("5-Macarrão instantâneo (1 pacote) = 400 calorias \n");
			printf("6-Bife grelhado (100g)            = 170 calorias \n");
			printf("7-Bife de frango grelhado (100g)  = 100 calorias \n");
			printf("8-Pudim de leite (1 fatia média)  = 240 calorias \n");
			printf("9-Bombom (20g)                    = 110 calorias \n");
			printf("10-Brigadeiro pequeno             =  60 calorias \n");
			printf("11-Biscoito recheado (unidade)    =  40 calorias \n");
			printf("12-Bolacha água e sal (unidade)   =  20 calorias \n");
			printf("13-Meio mamão papaia              =  50 calorias \n");
			printf("14-Açaí com granola (1 tigela de 200g c/ granola)           = 250 calorias \n");
			printf("15-Bolo de chocolate (pedaço médio s/ recheio s/ cobertura) = 350 calorias \n");
			printf("16-Sair!!! \n");
			printf("\n");
			printf("Digite o número do alimento: \n");
			scanf("%d", &op1);
			printf("Digite a quantidade do alimento: \n");
			scanf("%d", &quant);
			printf("\n");
			
			while(quant!=16){	
			printf("Digite o número do alimento: \n");
			scanf("%d", &op1);
			printop1f("Digite a quantidade do alimento: \n");
			scanf("%d", &quant);
			quant=quant+1;
			}
				
		CAL();		
		break;
		
		default:
			printf("Volte sempre!!! \n");
	}
	
	system ("PAUSE");
	return 0;
}
void IMC(){
	imc=peso/(altura*altura);
	printf("Seu IMC é: %.2f \n", imc);
}
void CAL(){
	if (op1==1){
		cal1=200*quant;
	}
	if (op1==2){
		cal2=200*quant;
	}
	if (op1==3){
		cal3=70*quant;
	}
	if (op1==4){
		cal4=100*quant;
	}
	if (op1==5){
		cal5=400*quant;
	}
	if (op1==6){
		cal6=170*quant;
	}
	if (op1==7){
		cal7=100*quant;
	}
	if (op1==8){
		cal8=240*quant;
	}
	if (op1==9){
		cal9=110*quant;
	}
	if (op1==10){
		cal10=60*quant;
	}
	if (op1==11){
		cal11=40*quant;
	}
	if (op1==12){
		cal12=20*quant;
	}
	if (op1==13){
		cal13=50*quant;
	}
	if (op1==14){
		cal14=250*quant;
	}
	if (op1==15){
		cal15=350*quant;
	}
	total=cal1+cal2+cal3+cal4+cal5+cal6+cal7+cal8+cal9+cal10+cal11+cal12+cal13+cal14+cal15;
	
	printf("Seu consumo calórico foi: %d calorias \n", total);
}

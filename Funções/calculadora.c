#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale (LC_ALL,"Portuguese_Brazil");
	
	int opcao;
	float area, perimetro, altura, base, basemenor, lados, D1, d1, raio;
	
	printf("Escolha a figura geométrica que deseja efetuar o cálculo da área e do perímetro: \n");
	printf("1 - Triângulo \n");
	printf("2 - Retângulo \n");
	printf("3 - Quadrado \n");
	printf("4 - Circulo \n");
	printf("5 - Trapézio \n");
	printf("6 - Losango \n");
	printf("7 - Sair \n");
	printf("\n");
	scanf("%d", &opcao);
	printf("\n");
	
	switch(opcao){
	
	case 1:
		printf("       A       A=b.h   \n");
		printf("       |         ---   \n");
		printf("      *|*         2    \n");
		printf("     **|**             \n");
		printf("  a ** h ** b  P=a+b+c \n");
		printf("   ****|****           \n");
		printf("  *****|*****          \n");
		printf(" B  Base (b)  C        \n");
		printf("       c               \n");
		
		printf("\n");
		
		printf("Digite o valor da base: \n");
		scanf("%f", &base);
		printf("Digite o valor da altura: \n");
		scanf("%f", &altura);
		
		area=base*altura/2;
		perimetro=base*3;
		
		printf("A Área do Triângulo é: %.2f \n", area);
		printf("O Perímetro do Triângulo é: %.2f \n", perimetro);
	break;
		
	case 2:
		printf(" *********** |    A=b.h  \n");
		printf(" *********** |h          \n");
		printf(" *********** |  P=2(b+h) \n");
		printf(" *********** |           \n");
		printf("   Base(b)               \n");
		
		printf("\n");
		
		printf("Digite o valor da base: \n");
		scanf("%f", &base);
		printf("Digite o valor da altura: \n");
		scanf("%f", &altura);
		
		area=base*altura;
		perimetro=(base*2)+(altura*2);
		
		printf("A Área do Retângulo é: %.2f \n", area);
		printf("O Perímetro do Retângulo é: %.2f \n", perimetro);
	break;
	
	case 3:
		printf("      L           A=L²   \n");
		printf("  ********               \n");
		printf("L ******** L   P=L+L+L+L \n");
		printf("  ********               \n");
		printf("  ********               \n");
		printf("      L                  \n");
		
		printf("\n");
		
		printf("Digite o valor da base: \n");
		scanf("%f", &base);
		
		area=base*base;
		perimetro=base*4;
		
		printf("A Área do Quadrado é: %.2f \n", area);
		printf("O Perímetro do Quadrado é: %.2f \n", perimetro);
	break;
	
	case 4:
		printf("      °°|°°                   \n");
		printf("    °° (r) °°    A=3,1416.r²  \n");
		printf("  °°°°  |  °°°°               \n");
		printf("  °----(d)----°  P=2.3,1416.r \n");
		printf("  °°°°°°°°°°°°°               \n");
		printf("    °°°°°°°°°                 \n");
		printf("      °°°°°                   \n");
		printf("      d=2.r                   \n");
		
		printf("\n");
		
		printf("Digite o valo da raio: \n");
		scanf("%f", &raio);
		
		area= 3.14159265*(raio*raio);
		perimetro= (2*3.14159265*raio);
		
		printf("A Área do Círculo é: %.2f \n", area);
		printf("O Perímetro do Círculo é: %.2f \n", perimetro);
	break;
	
	case 5:	
		printf("     Base Menor(b)       A=(B+b).h \n");
		printf("        |******            ------- \n");
		printf("Lado 1 /|******* Lado 2       2    \n");
		printf(" (L1) / |******** (L2)             \n");
		printf("     / h|*********     P=B+b+L1+L2 \n");
		printf("    /___|**********                \n");
		printf("     Base Maior(B)                 \n");
		
		printf("\n");
		
		printf("Digite o valor da base menor: \n");
		scanf("%f", &basemenor);
		printf("Digite o valor da base maior: \n");
		scanf("%f", &base);
		printf("Digite o valor da altura: \n");
		scanf("%f", &altura);
		printf("Digite o valor dos lados: \n");
		scanf("%f", &lados);
		
		area=(base+basemenor)*altura/2;
		perimetro=(base+basemenor)+lados*2;
		
		printf("A Área do Trapézio é: %.2f \n", area);
		printf("O Perímetro do Trapézio é: %.2f \n", perimetro);
	break;
	
	case 6:
		printf("     /|\           A=D.d      \n");
		printf("  L / D \ L          ---      \n");
		printf("   /  |  \            2       \n");
		printf("  /___|_d_\                   \n");
		printf("  \   |   /      P=L+L+L+L    \n");
		printf("   \  |  /                    \n");
		printf("  L \ | / L D: Diagonal Maior \n");
		printf("     \|/    d: Diagonal menor \n");
		
		printf("\n");
		
		printf("Digite o valor da diagonal maior: \n");
		scanf("%f", &D1);
		printf("Digite o valor da diagonal menor: \n");
		scanf("%f", &d1);
		printf("Digite o valor dos lados: \n");
		scanf("%f", &lados);
		
		area=(D1*d1)/2;
		perimetro=4*lados;
		
		printf("A Área do Retângulo é: %.2f \n", area);
		printf("O Perímetro do Retângulo é: %.2f \n", perimetro);
	break;
	
	default:
		printf("Origado por participar!!! \n");
	}
	system("PAUSE");
	return 0;
}

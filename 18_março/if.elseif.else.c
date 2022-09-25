#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int nota;
	printf("\n Digite sua nota \n");
	scanf("%d", &nota);
	if(nota<5){
		printf("\n Voce tem que estudar mais!!!");
	}else if((nota>=5)&&(nota<=6)){
		printf("\n Voce esta na media!!!");
	}else{
		printf("\n Parabens!!!");
	}
		printf("\n");
	
	
	
	
	system("PAUSE");
	return 0;
}

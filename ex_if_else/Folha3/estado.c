#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char estado[2];
		printf("Digite a sigla de seu estado: \n");
		scanf("%s", &estado);
		
		if(strcmp(estado,"mg")==0){
			printf("\nVoce eh mineiro!\n");
		}
		else if(strcmp(estado,"rj")==0){
			printf("\nVoce eh carioca!\n");
		}
		else if(strcmp(estado,"sp")==0){
			printf("\nVoce eh paulista!\n");
		}else{
			printf("\nVoce eh de outro estado\n");
		}
		
	system("pause");	
	return 0;
}

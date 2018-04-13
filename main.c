#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *args[]) {
  long inteiro = 0;
	int flag = 1;

	int i = 0;
	printf("|-------------------------|\n");
    printf("|   Argumentos recebidos  |\n");
    printf("|-------------------------|\n");
    printf("| # | Valor               |\n");
    printf("|-------------------------|\n");

    for(i = 0; i < argc; i++){
        printf("| %d | %s\n",(i+1),args[i]);
    }
    printf("|-------------------------|\n");

	FILE *arquivo;
	FILE *arquivo2;
	arquivo=fopen(args[1], "r");
	arquivo2=fopen(args[2], "w");
	while(1) {
		flag = fscanf(arquivo, "%d", &inteiro);
		if (flag < 0) {
			break;
		}
		
		inteiro = inteiro * inteiro;
		fprintf(arquivo2, "%d\n", inteiro);
	
	  
	}
		
fclose(arquivo);
fclose(arquivo2);
	return 0;
}

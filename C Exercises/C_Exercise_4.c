//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

void main() {
	
	char pergunta[300];
	
	printf("Digite a pergunta da pesquisa: \n");
	gets(pergunta);     //"gets" é utilizado para realizar a leitura de um texto (string)
	
	int opcao = 0;
	double totalSim = 0;
	double totalNao = 0;
	double totalVotos = 0;
	
	double percentualSim = 0.0;
	double percentualNao = 0.0;
	
	do{
		printf("Digite 1 - SIM, 2 - NAO, 3 - ENCERRAR PESQUISA \n");
		scanf("%d", &opcao); 
		
		switch(opcao){
			case 1 : {
				totalSim = totalSim + 1;
				totalVotos = totalVotos + 1;
				break;
			}
			case 2 : {
				totalNao = totalNao + 1;
				totalVotos = totalVotos + 1;
				break;
			}
			case 3 : {
				percentualSim = (totalSim * 100) / totalVotos;
				percentualNao = (totalNao * 100) / totalVotos;
				
				printf("Resultado da Pesquisa\n\n");
				printf("%s\n", pergunta);
				printf("SIM -> %.2f\n", percentualSim);
				printf("NAO -> %.2f\n", percentualNao);
				break;
			}
			default : {
				printf("Wrong Answer\n");
				break;
			}
		}
	}while(opcao != 3);
}



//#include <stdio.h>
//#include <stdlib.h>

void main (){
	
	int cont = 1;
	while(cont <= 100){
		printf("fsociety \n");
		cont = cont + 1;  //condição de parada
	}
	
	int opcao = 0;
	while(opcao != 3){
		printf("Choose a pill \n 1 - Redpill \n 2 - Bluepill \n 3 - What the fuck pill \n");
		scanf("%d", &opcao);
		
		switch (opcao){
			case 1 : {
				printf("Taking Redpill \n");
				system("pause"); //"pausar" a execução, pressionar qualquer tecla para prosseguir
				break;
			}
			case 2 : {
				printf("Taking Bluepill \n");
				system("pause");
				break;
			}
			case 3 : {
				printf("Taking What the fuck pill \n");
				break;
			}default : {
				printf("no pill \n");
				system("pause");
				break;
			}
		}
		system("cls"); //limpar a tela do terminal 
	}
}




#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int idade;
	
	printf("Digite sua idade: \n");
	scanf("%d", &idade); 
	
	printf("A idade digitada foi %d \n", idade);
	
	if (idade >= 18 && idade <= 20) { 
		printf("Idade entre 18 anos e 20 anos de idade\n");
    }else{
    	if(idade < 18){
    		printf("Idade menor que 18 \n");
		}
			if(idade > 20){
				printf("Idade maior que 20 \n");
			}
	}
	
	int numSemana;
	printf("Digite um numero da semana: \n");
	scanf("%d", &numSemana);
	
	switch(numSemana){
		case 1 : {
			printf("Sunday \n");
			break;
		}
		case 2 : {
			printf("Monday \n");
			break;
		}
		case 3 : {
			printf("Tuesday \n");
			break;
		}
		case 4 : {
			printf("Wednesday \n");
			break;
		}
		case 5 : {
			printf("Thursday \n");
			break;
		}
		case 6 : {
			printf("Friday \n");
			break;
		}
		case 7 : {
			printf("Saturday \n");
			break;
		}
		default : {
			printf("Think, grasshooper, think... (wrong answer) \n");
			break;
		}
	}
	
	return 0;
}


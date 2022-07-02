//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

void main() {
	
	int qtd;
	printf("Digitar a quantidade de notas para armazenar\n");
	scanf("%d", &qtd);
	
	float notas[qtd]; //criando um vetor no tamanho definido pelo usuário 
	
	//Leitura das notas para o meu vetor
	int cont;
	for(cont = 0; cont < qtd; cont++){
		printf("Digite a nota numero %d\n", (cont + 1)); 
		scanf("%f", &notas[cont]); 
	}
	
	float total = 0.0;
	//Escrever as notas na tela
	for(cont = 0; cont < qtd; cont++){
		total = total + notas[cont];
		printf("Nota na posicao %d é %f\n", (cont+1), notas[cont]);
	}
	float media = 0.0;
	media = total / qtd; //cálculo da média das notas
	printf("Media das notas corresponde %f", media);
	
	char nome[100] = {"Rogerio Napoleao"};
	printf("Nome criado e %s\n", nome);
	
	int cont3 = 0;
	while(nome[cont3] != '\0'){
		printf("Letra na posicao %d e %c\n", (cont3+1), nome[cont]);
		cont3 = cont3+1;
	}
}
	
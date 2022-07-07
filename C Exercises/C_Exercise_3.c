#include <stdio.h>
#include <stdlib.h>

// Sintaxe Estrutura "for" -- for(<condição inicial>;<teste parada>;<incremento>)

int main(int argc, char *argv[]) {
	
	int cont = 1;    
	for(cont = 1; cont <= 100; cont++){  //modelo com incremento
		printf("Esquerda, direita %d\n", cont); 
	}
	
	int cont2 = 100;
	for(cont2 = 100; cont2 >= 0; cont2--){ //modelo com decremento 
		printf("Escreva... %d\n", cont2);
	}
	
	printf("Digite a quantidade de vezes: \n");
	int n;
	scanf("%d", &n);
	
	int cont3;
	for(cont3 = 1; cont3 <= n; cont3++){
		printf("twist and shout %d\n", cont3);
	}
	
	
	return 0;
}

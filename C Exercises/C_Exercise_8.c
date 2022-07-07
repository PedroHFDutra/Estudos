#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct produto{
	int codigo;
	char nome[100];
	float valorCusto;
	float valorVenda;
	int quantidade
}


int main(void) {
	struct produto p1;
	p1.codigo = 1;
	printf("Digite o nome do produto");
	fflush(stdin);
	gets(p1.nome);

	printf("O nome cadastrado em p1 foi %s", p1.nome)
		
}


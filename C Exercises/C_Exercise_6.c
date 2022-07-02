//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int qtdAluno = 0;
	int qtdNotas = 0;
	printf("Bem vindo a calculadora de media da turma\n");
	printf("Digite a quantidade de alunos que você deseja armazenar?\n");
	fflush(stdin); //limpeza do buffer
	scanf("%d", &qtdAluno);
	printf("Digite a quantidade de notas de cada aluno\n");
	fflush(stdin);
	scanf("%d", &qtdNotas);
	
	float notas[qtdAluno][qtdNotas];
	
	int l, c;
	l = 0;
	while(l < qtdAluno){
		printf("Aluno %d\n", (l+1)); //incremento (l+1) feito para mostrar uma interface mais agradável ao user, evitando o "Aluno 0", vetor começa em 0.
		c = 0;
		while(c < qtdNotas){
			printf("Digite a nota %d do aluno %d\n", (c+1),(l+1)); 
			fflush(stdin); 
			scanf("%f", &notas[l][c]); 
			c = c + 1;
		}
		l = l + 1;
	}

	float media, total;
	
	for(l = 0; l < qtdAluno; l++){
		media = 0.0;
		total = 0.0;
		for(c = 0; c < qtdNotas; c++){
			//printf("A nota %d do aluno %d e %f\n", (c+1), (l+1), notas[l][c]); 
			total = total + notas[l][c];
			if((notas[l][c] % 3) == 0){
				printf("Divisivel por 3");
			}
        }
        media = total / qtdNotas;
        //printf("A media do aluno %d e %.2f\n", (l+1), media);
    }
}


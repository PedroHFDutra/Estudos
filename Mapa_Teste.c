
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

char nomeCivil[999];
char cpf[100];
char nomeVacina[100];
char dataVacinacao[100];
int loteVacina = 0 ;
int codigo_pessoa = 0;

void listarAplicacao(){
	int opcao_menu = 0;
	int conta;
	int conta2 = cpf[100];
	printf("Confira as aplicações cadastradas:\n");
		do{
			printf("Código:%d\n", (codigo_pessoa+1));
			printf("Nome:%s\n", nomeCivil);
			printf("CPF:%s\n", cpf);
			printf("Vacina:%s\n", nomeVacina);
			printf("Data:%s\n", dataVacinacao);
			printf("Número do Lote:%d\n", loteVacina);
			printf("=================================\n");
	}while(opcao_menu != 4);
}


int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");
    int cont;
    int cont2;
  	int opcao_menu = 0;
  	char consultaCpf[100] = "cpf[100]";
	printf("-------------------------------------------------------------------\n"
        "|  Seja bem-vindo ao Aplicativo de Cadastro e Consulta de Vacinas |\n"
        "|       Desenvolvido por: Acad. EngSoft. Pedro Dutra, 2022        |\n"
        "-------------------------------------------------------------------\n");
		while(opcao_menu != 4){
			printf("==========MENU===========\n"
                    "1. Cadastrar Vacina    |\n"
                    "2. Listar Aplicações   |\n"
                    "3. Consultar por CPF   |\n"
                    "4. Sair                |\n");
            printf("=========================\n\n");
			scanf("%d", &opcao_menu);
			fflush(stdin);
			system("cls");
			
			switch (opcao_menu){
				case 1 : {
					printf("Opção Escolhida: Cadastrar Vacina\n");
					printf("Informe o nome:\n");
					gets(nomeCivil);
					fflush(stdin);
					printf("Informe o CPF (Pontuação Dispensável):\n"); 
					scanf("%s", &cpf); 
					fflush(stdin); 
					printf("Informe a vacina a ser cadastrada:\n"); 
					gets(nomeVacina); 
					fflush(stdin); 
					printf("Informe a data de vacinação:\n"); 
					scanf("%s", &dataVacinacao); 
					fflush(stdin); 
					printf("Informe o lote da vacinada aplicada:\n"); 
					scanf("%d", &loteVacina); 
					fflush(stdin); 
					system("pause");
					system("cls");
					break;
				}
				
				case 2 : {
					printf("Opção Escolhida: Listar Aplicações\n");
					listarAplicacao();
					system("pause");
					system("cls");
					break;
				}
			
				case 3 : {
					printf("Opção Escolhida: Consultar por CPF\n");
					printf("Informe o CPF para consulta: ");
					fflush(stdin);
					scanf("%s", &consultaCpf); //declarar consultaCpf
					for(cont = 0; cont < cont2; cont++){
					fflush(stdin);
						if (strcmp(consultaCpf, cpf)==0)
						{
							printf("Código:%d\n", (codigo_pessoa+1));
							printf("Nome:%s\n", nomeCivil);
							printf("CPF:%s\n", cpf);
							printf("Vacina:%s\n", nomeVacina);
							printf("Data:%s\n", dataVacinacao);
							printf("Número do Lote:%d\n", loteVacina);
							printf("=================================\n");	
						}else{
							printf("CPF não encontrado, verifique as informações.\n");
						} system("pause");
						  system("cls");
						  break;		
					}
				}
				
				case 4 : {
					printf("Opção Escolhida: Sair\n");
					system("pause");
					system("cls");
					break;
				}default : {
					printf("Opção Inválida.\n");
					system("pause");
					break;
				}
				
			}
			
			
			
		}
	
	
	
	
	return 0;
}

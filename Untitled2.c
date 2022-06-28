#include <stdio.h>
#define SIZE 200


char nome [SIZE][50];
char email [SIZE][50];
int cpf [SIZE];
int op;

void cadastro();
void pesquisa();
void lista();


int main(void){
	
	do
	{
		system("cls");
		printf("------MENU-----\n1 - CADASTRAR. \n2 - LISTA. \n3 - PESQUISAR. \n4 - EXIT.\n");
		scanf("%d", &op);
		
		switch(op){
			case 1:
				cadastro();
				break;
			case 2:
				lista();
				break;
			case 3:
				pesquisa();
				break;
			case 4:
				system("exit");
				break;
			default:
				printf("Opcao invalida.");
				getchar();
				getchar();
				break;
				
		}
	}while(op != 4);
}
void lista(){
	int i;
	
	for (i = 0; i < SIZE; i++){
		if(cpf[i] > 0){
				printf("\nNOME: %s \nE-MAIL: %s \nCPF: %d", nome[i], email[i], cpf[i]);
		}
		else{
			break;
		}
	}
	getchar();
	getchar();
	
}

void cadastro(){
	static int linha;
	
	do
	{
		printf("Informe seu nome:\n");
		scanf("%s", &nome[linha]);
		printf("Informe seu CPF:\n");
		scanf("%d", &cpf[linha]);
		printf("Informe seu E-mail:\n");
		scanf("%s", &email[linha]);
		printf("1 - Para cadastrar novo usuario.\n2 - Para sair.\n");
		scanf("%d", &op);
		linha++;
		
	}while(op==1);
	
}
void pesquisa(){
	int cpfpesquisa;
	char emailpesquisa[50];
	int i;	
	do
	{
		printf("1 - Para pesquisar por CPF.\n2 - Para pesquisar pelo E-mail.\n3 - Para pesquisar novamente.\n");
		scanf("%d", &op);
		
		switch(op)
		{
			case 1:
				printf("Digite o CPF:\n");
				scanf("%d", &cpfpesquisa);
				for (i = 0; i < SIZE; i++){
					if (cpf[i]==cpfpesquisa){
						printf("\nNOME: %s \nE-MAIL: %s \nCPF: %d", nome[i], email[i], cpf[i]);
					}
				}
				
				break;
			case 2:
				printf("Digite o E-MAIL:\n");
				scanf("%s", &emailpesquisa);
					for (i = 0; i < SIZE; i++){
					if (strcmp (email[i], emailpesquisa[i])){
						printf("\nNOME: %s \nE-MAIL: %s \nCPF: %d", nome[i], email[i], cpf[i]);
					}
				}
				break;
			default:
				printf("Opcao invalida.");
				break;
		
		}
		printf("Digite 1 para continuar pesquisando.");
		scanf("%d", &op);
	}while(op==1);
}

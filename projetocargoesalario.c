#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int op;
	float salario;
	char cargo;
	
	printf(" 1 - servente.\n 2 - pedreiro.\n 3 - mestre de obras.\n 4 - tecnico de seguranca.\n");
	printf("Qual sua proficao: \n");
	scanf("%d", &op);
	printf("Qual o valor do salario de acordo com a sua profissao: \n");
	scanf("%f", &salario);
	
	switch (op)
	{
		case 1:
			salario = (salario * 40) / 100 + salario;
			printf("O servente teve um aumento de 40 porcento, seu salario ficou RS%.2f.\n", salario);
		break;
		case 2:
			salario = (salario * 35) / 100 + salario;
			printf("O pedreiro teve um aumento de 35 porcento, seu salario ficou RS%.2f.\n",salario);
		break;
		case 3:
			salario = (salario * 20) / 100 + salario;
			printf("O mestre de obras teve um aumento de 20 porcento, seu salario ficou RS%.2f.\n", salario);
		break;
		case 4:
			salario = (salario * 10) / 100 + salario;
			printf("O tecnico de seguranca teve um aumento de 10 porcento, seu salario ficou RS%.2f.\n", salario);
		break;
	}
	
	
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float num1, num2, resultado;
	int op;
	
	printf("Digite um numero para ser calculado: \n" );
	scanf("%f", &num1);
	printf("Digite um numero para ser calculado: \n");
	scanf("%f", &num2);
	printf("Escolha a operacao que deseja realizar:\n 1 - soma \n 2 - subtracao \n 3 - multiplicacao \n 4 - subtracao \n");
	scanf("%d", &op);
	
	switch(op)
	{
		case 1:
			resultado = num1 + num2;
			printf("A soma e: %.3f \n", resultado);
			break;
		case 2:
			resultado = num1 - num2;
			printf("O resultado da subtracao e: %.3f \n", resultado);
			break;
		case 3:
			resultado = num1 * num2;
			printf("O resultado da multiplicacao e: %.3f \n", resultado);
			break;
		case 4:
			resultado = num1 / num2;
			printf("O resultado da subtracao e: %.3f \n", resultado);
			break;
		default:
			printf("Opcao invalida. \n");
			break;
}
		return 0;	 
	}



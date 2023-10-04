#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

#define ESCRITURARIO 0.5
#define SECRETARIO 0.35
#define CAIXA 0.2
#define GERENTE 0.1

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int codigo;
	double salario, auxiliar, aumento;
	
	printf("Digite o c�digo do cargo e o s�lario: ");
	scanf("%d %lf", &codigo, &salario);
	
	switch(codigo) {
		case 1: 
		 
		 auxiliar = (salario*ESCRITURARIO);
		 
		 aumento = auxiliar;
		 
		 salario = salario + auxiliar;
		printf("\nEscritur�rio\n");
		printf("Aumento: %.2lf\n", aumento);
		printf("Novo sal�rio: %.2lf\n", salario);
		break;
		
		case 2:
		auxiliar = (salario*SECRETARIO);
		 
		aumento = auxiliar;
		 
		salario = salario + auxiliar;
		printf("\nSecret�rio\n");
		printf("Aumento: %.2lf\n", aumento);
		printf("Novo sal�rio: %.2lf\n", salario);
		break;
	
		case 3:
		auxiliar = (salario*CAIXA);
		 
		aumento = auxiliar;
		 
		salario = salario + auxiliar;
		printf("\nCaixa\n");
		printf("Aumento: %.2lf\n", aumento);
		printf("Novo sal�rio: %.2lf\n", salario);
		break;
		
		case 4:
		auxiliar = (salario*GERENTE);
		 
		aumento = auxiliar;
		 
		salario = salario + auxiliar;
		printf("\nGerente\n");
		printf("Aumento: %.2lf\n", aumento);
		printf("Novo sal�rio: %.2lf\n", salario);
		break;
		
		case 5:
		 
		salario = salario + auxiliar;
		printf("\nDiretor\n");
		printf("Aumento: 0\n", aumento);
		printf("Novo sal�rio: %.2lf\n", salario);
		break;
		default: printf("Voc� n�o digitou um cargo inexistente.\n");
		
	}
	
	
	system("PAUSE");
	return 0;
}

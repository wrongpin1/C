#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float salario, novosalario, aux, aumento;
	
	printf("Digite o sal�rio: ");
	scanf("%f", &salario);
	
	aumento = 0.25;

    aux = salario*aumento;    
    novosalario = salario+aux;

    printf("O sal�rio p�s aumento �: %.2f\n", novosalario);
	
	system("PAUSE");
	return 0; 
}

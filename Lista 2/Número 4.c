#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int opcao;
	double numero1, numero2, soma, raizQ, divisao;

	printf("Menu de op��es dispon�veis:\n");
	printf("1 - Soma de dois n�meros\n");
	printf("2 - Raiz quadrada de um n�mero\n");
	printf("3 - Divis�o de dois n�meros\n");
	printf("Digite a op��o desejada: ");
	scanf("%d", &opcao);

    	switch(opcao) {
    		case 1:
    			printf("\nDigite dois n�meros: ");
    			scanf("%lf %lf", &numero1, &numero2);
    			
    			soma = (numero1+numero2);
    			
    			printf("A soma entre os dois n�meros � %.2lf\n", soma);
    			break;
    		case 2:
    			printf("\nDigite um n�mero: ");
    			scanf("%lf", &numero1);
    			
    			raizQ = sqrt(numero1);
    			
    			printf("A raiz quadrada deste n�mero �: %.2lf\n", raizQ);
    			
    			break;
    		case 3:
    			
    			printf("\nDigite dois n�meros: ");
    			scanf("%lf %lf", &numero1, &numero2);
    			
    			divisao = (numero1/numero2);
    			
    			printf("A divis�o entre esses dois n�meros �: %.2lf\n", divisao);
    			
    			break;
    			
    		default: printf("\nA op��o desejada n�o est� dispon�vel.\n");
		}
    
	system("PAUSE");
	return 0;
}

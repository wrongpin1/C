#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Digite o n�mero: ");
	scanf("%d", &numero);
	
	if(numero%2==0)
	{
		printf("O n�mero %d � par\n", numero);
	}
	else
	printf("O n�mero %d � �mpar\n", numero);
	
	system("PAUSE");
	return 0;
}

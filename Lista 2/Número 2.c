#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
 	int numero1, numero2, numero3;
 	
	printf("Digite tr�s n�meros diferentes: ");
	scanf("%d %d %d", &numero1, &numero2, &numero3);
	
	if(numero1 > numero2 && numero2 > numero3)
	{
		printf("N�meros em ordem crescente: %d %d %d\n", numero3, numero2, numero1);
	}
	else
	if(numero2 > numero1 && numero1 > numero3){
		printf("N�meros em ordem crescente: %d %d %d\n", numero3, numero1, numero2);
	}
	else 
	if(numero3 > numero2 && numero2 > numero1){
	printf("N�meros em ordem crescente: %d %d %d\n", numero1, numero2, numero3);
	}
	else {
		printf("N�meros em ordem crescente: %d %d %d\n", numero2, numero1, numero3);
	}

	system("PAUSE");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero, i, contador;
	
	contador = 0;
	
	do {
		printf("Digite um n�mero inteiro maior que 1: ");
		scanf("%d", &numero);
		
	} while (numero <= 1);
	
	for(i=1; i<=numero; i++){
		if(numero%i == 0){
			contador++;
		}
		if(contador>2){
			break;
		}
		
	}
	
	if(contador >2){
		printf("\nO n�mero %d n�o � primo.\n", numero);
	}
	else {
		printf("\nO n�mero %d � primo.\n", numero);
	}
	
	system("PAUSE");	
	return 0;
}

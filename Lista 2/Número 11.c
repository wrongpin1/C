#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	double peso, altura;
	
	printf("Digite, respectivamente, o peso e a altura de uma pessoa: ");
	scanf("%lf %lf", &peso, &altura);
	
	if(altura < 1.20 && peso <= 60)
	{
		printf("\nPeso: %.2lfkg\nAltura: %.2lfcm\nSua classifica��o � A.\n", peso, altura);
	}
	else if(altura < 1.20 && peso <= 90 && peso > 60)
	{
		printf("\nPeso: %.2lfkg\nAltura: %.2lfcm\nSua classifica��o � D.\n", peso, altura);
	}
	else if(altura < 1.20 && peso > 90)
	{
		printf("\nPeso: %.2lfkg\nAltura: %.2lfcm\nSua classifica��o � G.\n", peso, altura);
	}
	else if(altura >= 1.20 && altura <= 1.70 && peso <= 60)
	{
		printf("\nPeso: %.2lfkg\nAltura: %.2lfcm\nSua classifica��o � B.\n", peso, altura);
	}
	else if(altura >= 1.20 && altura <= 1.70 && peso <= 90 && peso > 60)
	{
		printf("\nPeso: %.2lfkg\nAltura: %.2lfcm\nSua classifica��o � E.\n", peso, altura);		
	}
	else if(altura >= 1.20 && altura <= 1.70 && peso > 90) {
		printf("\nPeso: %.2lfkg\nAltura: %.2lfcm\nSua classifica��o � H.\n", peso, altura);
	}
	else if(altura > 1.70 && peso <= 60)
	{
		printf("\nPeso: %.2lfkg\nAltura: %.2lfcm\nSua classifica��o � C.\n", peso, altura);	
	}
	else if(altura > 1.70 && peso <= 90 && peso > 60)
	{
		printf("\nPeso: %.2lfkg\nAltura: %.2lfcm\nSua classifica��o � F.\n", peso, altura);
	}
	else if(altura > 1.70 && peso > 90) {
		printf("\nPeso: %.2lfkg\nAltura: %.2lfcm\nSua classifica��o � I.\n", peso, altura);
	}
	
	system("PAUSE");
	return 0;
}


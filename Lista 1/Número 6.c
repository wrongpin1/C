#include <stdlib.h>
#include <locale.h>
#include <stdio.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	float raizQ, raizC;
	
	printf("Digite um n�mero maior que 0: ");
	scanf("%d", &n);
	
	raizQ = sqrt(n);

	raizC = cbrt(n);
	
	printf("%d ao quadrado �: %d\n", n, n*n);
	printf("%d ao cubo �: %d\n", n, (n*n)*n);
	printf("A raiz quadrada de %d �: %.2f\n", n, raizQ);
	printf("A raiz c�bica de %d �: %.2f\n", n, raizC);
	
	
	
	system("PAUSE");
	return 0;
}

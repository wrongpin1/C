#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <stdio.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	double nota1, nota2, media;
	
	printf("Digite duas notas: ");
	scanf("%lf %lf", &nota1, &nota2);
	
	media = (nota1+nota2)/2;
	
	if(media >= 7.0)
	{
		printf("\nO aluno foi aprovado com m�dia %.2lf\n", media);
	}
	else if(media < 7.0 && media >= 4.0)
	{
		printf("\nO aluno est� de prova final com m�dia %.2lf\n", media);
	}
	else {
		printf("\nO aluno est� reprovado com m�dia %.2lf\n", media);
	}
	
	system("PAUSE");
	return 0;
}

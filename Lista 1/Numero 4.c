#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int p1, p2, p3, somap;
	float n1, n2, n3, mediaponderada, somaxpesos;
	
	printf("Digite tr�s notas: ");
	scanf("%f %f %f", &n1, &n2, &n3);
	
	printf("Digite tr�s pesos: ");
	scanf("%d %d %d", &p1, &p2, &p3);
	
	somap = p1+p2+p3;
	
	somaxpesos = (n1*p1)+(n2*p2)+(n3*p3);	
	
	mediaponderada = somaxpesos/somap;
	
	printf("A m�dia ponderada das tr�s notas �: %.2f\n", mediaponderada);
	
	system("PAUSE");
	
	return 0;
}

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	double x, y, z;
	
	printf("Digite respectivamente x, y e z: ");
	scanf("%lf %lf %lf", &x, &y, &z);
	
	if(x < (y+z) && y < (x+z) && z < (x+y))
	{
		if ( x == y && x == z)
		{
			printf("\nx, y e z digitados formam um tri�ngulo equil�tero.\n");
			}	
		else if(x == y || y == z || x == z)
		{
			printf("\nx, y e z digitados formam um tri�ngulo is�sceles.\n");
		}
		else
		{
			printf("\nx, y e z digitados formam um tri�ngulo escaleno.\n");
		}
	}
	else {
	
	printf("\nx, y e z digitados n�o formam um tri�ngulo.\n");
}
	system("PAUSE");	
	return 0;
}

#include <stdio.h>
#include <cstdlib>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"");
	float r,a;
	
	printf("Digite o n�mero do raio: ");
	scanf("%f",&r);
	
	while((r<0)||(r==0))
	{
		printf("Esse n�mero � inv�lido, digite outro n�mero: ");
		scanf("%f",&r);
	}
	a=3.14*(r*r);
	printf("O valor da �rea ser� de: %.2f",a);
}

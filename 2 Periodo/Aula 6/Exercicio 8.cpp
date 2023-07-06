#include <stdio.h>
#include <cstdlib>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"");
	float r,a;
	
	printf("Digite o número do raio: ");
	scanf("%f",&r);
	
	while((r<0)||(r==0))
	{
		printf("Esse número é inválido, digite outro número: ");
		scanf("%f",&r);
	}
	a=3.14*(r*r);
	printf("O valor da área será de: %.2f",a);
}

#include <stdio.h>
#include <cstdlib>

main()
{
	float R,D,E;
	printf("Informe o valor em reais: ");
	scanf("%f",&R);
	D=R*3.17;
	printf("\nO valor em dolares e: %f",D);
	E=R*3.70;
	printf("\nO valor em euros e: %f",E);
}

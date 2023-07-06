#include <stdio.h>
#include <cstdlib>
#include <math.h>

main()
{
	float B,E,EF,X;
	int const N1=1;
	printf("Digite o valor da base: ");
	scanf("%f",&B);
	printf("Digite o valor do expoente: ");
	scanf("%f",&E);
	EF=N1/E;
	X=pow(B,EF);
	printf("O valor da raiz e %.f",X);
	
}

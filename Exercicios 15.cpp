#include <stdio.h>
#include <cstdlib>

main()
{
	float Q1,Q2,Q3,N1,N2,N3;
	printf("Digite o primeiro numero: ");
	scanf("%f",&N1);
	printf("Digite o segundo numero: ");
	scanf("%f",&N2);
	printf("Informe o terceiro numero: ");
	scanf("%f",&N3);
	Q1=N1*N1;
	Q2=N2*N2;
	Q3=N3*N3;
	printf("\nO primeiro numero ao quadrado e: %.f",Q1);
	printf("\nO segundo numero ao quadrado e: %.f",Q2);
	printf("\nO terceiro numero ao quadrado e: %.f",Q3);
}

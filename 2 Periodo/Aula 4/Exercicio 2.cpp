#include <stdio.h>
#include <cstdlib>
#include <math.h>

main()
{
	float A,B,C,D,X1,X2;
	printf("Digite valor de A:");
	scanf("%f", &A);
	printf("Digite valor de B:");
	scanf("%f", &B);
	printf("Digite valor de C:");
	scanf("%f", &C);
	D=B*B-4*A*C;
	if (D<0)
	{
		printf("Nao e possivel calcular: %.2f",D);
	}
	else
	{
		X1=(-(B)+(sqrt(D)))/2*A;
		X2=(-(B)-(sqrt(D)))/2*A;
		printf("O valor de delta e:%.2f\n",D);
		printf("O valor de X1 e:%.2f\n",X1);
		printf("O valor de X2 e:%.2f\n",X2);
	}
}
/*Exercicio 2, aluno: João Victor*/

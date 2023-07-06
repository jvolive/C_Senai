#include <stdio.h>
#include <cstdlib>
#include <math.h>

main()
{
	float X,RQ,RC,N,Y;
	printf("Informe um numero:");
	scanf("%f",&N);
	if (N<=0)
	{
		printf("Esse valor e invalido.");
	}
	else
	if (N!=5)
	{
		RC=cbrt(N);
		printf("Essa e a raiz cubica desse valor e: %f",RC);
	}
	else
	if (N=5)
	{
		RQ=sqrt(N);
		printf("Essa e a raiz quadrada de 5: %f",RQ);
	}
}
/*Exercicio 6, aluno: João Victor*/

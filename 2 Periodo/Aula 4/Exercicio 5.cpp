#include <stdio.h>
#include <cstdlib>

main()
{
	int A,B,C;
	printf("Informe o primeiro lado:");
	scanf("%d",&A);
	printf("Informe o segundo lado:");
	scanf("%d",&B);
	printf("Informe o terceiro lado:");
	scanf("%d",&C);
	if ((A==B)&&(B==C))
	{
		printf("E um triangulo equilatero.");
	}
	else
	if ((A!=B)&&(B!=C))
	{
		printf("Nao e um triangulo equilatero.");
	}
	else
	if (C!=A)
	{
		printf("Nao e um triangulo equilatero.");
	}
}
/*Exercicio 5, aluno: João Victor*/

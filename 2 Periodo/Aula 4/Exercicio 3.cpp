#include <stdio.h>
#include <cstdlib>

main()
{
	int N1,N2,N3;
	printf("Digite o primeiro numero:");
	scanf("%d",&N1);
	printf("Digite o segundo numero:");
	scanf("%d",&N2);
	printf("Digite o terceiro numero:");
	scanf("%d",&N3);
	if (N1==N2)
	{
		printf("Esses numeros sao iguais.");
	}
	else
	if (N2==N3)
	{
		printf("Esses numeros sao iguais.");
	}
	else
	if (N3==N1)
	{
		printf("Esses numeros sao iguais.");
	}
	else
	if (N1>N2)
	{
		printf("%d e o numero maior",N1);
	}
	else
	if (N2>N3)
	{
		printf("%d e o numero maior",N2);
	}
	else
	if (N3>N1)
	{
		printf("%d e o numero maior",N3);
	}
}
/*Exercicio 3, aluno: João Victor*/

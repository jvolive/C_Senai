#include <stdio.h>
#include <cstdlib>

main()
{
	int N1,N2;
	printf("Digite o primeiro numero:");
	scanf("%d", &N1);
	printf("Digite o segundo numero:");
	scanf("%d", &N2);
	if (N1==N2)
	{
		printf("Esses numeros sao iguais");
	}
	else
	if (N1>N2)
	{
		printf("%d e o numero maior",N1);
	}
	else
	{
		printf("%d e o numero maior",N2);
	}
}
/*Exercicio 1, aluno: João Victor*/

#include <stdio.h>
#include <cstdlib>

main()
{
	int N;
	printf("Informe um valor:");
	scanf("%d",&N);
	if (N==0)
	{
		printf("Esse valor e zero");
	}
	else
	if (N%2==0)
	{
		printf("Esse valor e par %d",N);
	}
	else
	{
		printf("Esse valor e impar.");
	}
}
/*Exercicio 9, aluno: João Victor*/

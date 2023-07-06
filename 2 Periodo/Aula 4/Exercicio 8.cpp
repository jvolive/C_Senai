#include <stdio.h>
#include <cstdlib>

main()
{
	int N,X;
	printf("Informe um valor:");
	scanf("%d",&N);
	if (N==0)
	{
		printf("Esse valor e zero");
	}
	else
	if (N>0)
	{
		printf("Esse valor e positivo: +%d",N);
	}
	else
	{
		X=(N)*(-1);
		printf("Esse valor e: +%d\n",X);
	}
}
/*Exercicio 8, aluno: João Victor*/

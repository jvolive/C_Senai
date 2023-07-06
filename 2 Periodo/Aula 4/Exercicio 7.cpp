#include <stdio.h>
#include <cstdlib>

main()
{
	int N1,N2,X;
	printf("Digite o primeiro valor:");
	scanf("%d",&N1);
	printf("Digite o segundo valor:");
	scanf("%d",&N2);
	if (N1==N2)
	{
		printf("Esses valores sao iguais.");
	}
	else
	if (N1>N2)
	{
		X=N1-N2;
		printf("O resultado e: %d",X);
	}
	else
	if (N2>N1)
	{
		X=N2-N1;
		printf("O resultado e: %d",X);
	}
}
/*Exercicio 7, aluno: João Victor*/

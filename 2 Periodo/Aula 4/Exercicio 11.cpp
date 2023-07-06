#include <stdio.h>
#include<cstdlib>

main()
{
	float S;
	printf("Informe o valor do seu salario:");
	scanf("%f",&S);
	if (S<500)
	{
		S=((S*15)/100)+S;
		printf("Esse e o reajuste para salarios menores que 500 reais: %.2f",S);
	}
	else
	if (S>=500 <=1000)
	{
		S=((S*10)/100)+S;
		printf("Esse reajuste para salarios maiores ou iguais a 500 reais e menores ou iguais a 1000 reais: %.2f",S);
	}
	else
	if (S>1000)
	{
		S=((S*5)/100)+S;
		printf("Esse e o reajuste para salarios maiores que 1000 reais: %.2f",S);
	}
}
/*Exercicio 11, aluno: João Victor*/

#include <stdio.h>
#include <cstdlib>
#include <math.h>

main()
{
	float A,B,C;
	printf("Digite o valor de A:");
	scanf("%f",&A);
	printf("Digite o valor de B:");
	scanf("%f",&B);
	printf("Digite o valor de C:");
	scanf("%f",&C);
	if (((A+B)>C)&&((A+C)>B)&&((B+C)>A))
	{
		printf("Forma um triangulo.");
	}
	else
	{
		printf("Nao forma um triangulo");
	}
}
/*Exercicio 10, aluno: João Victor*/

#include <stdio.h>
#include <cstdlib>

main()
{
	float IMC,A,P;
	printf("Informe sua altura:");
	scanf("%f",&A);
	printf("Informe seu peso:");
	scanf("%f",&P);
	IMC=P/(A*A);
	if (IMC<18)
	{
		printf("Voce esta abaixo do peso.");
	}
	else
	if (IMC<25)
	{
		IMC=P/(A*A);
		printf("Voce esta no peso normal.");
	}
	else
	if (IMC<30)
	{
		IMC=P/(A*A);
		printf("Voce esta sobrepeso.");
	}
	else
	if (IMC<35)
	{
		IMC=P/(A*A);
		printf("Obeso leve.");
	}
	else
	if (IMC<40)
	{
		IMC=P/(A*A);
		printf("Obeso moderado.");
	}
	else
	if (IMC>=40)
	{
		IMC=P/(A*A);
		printf("Obeso morbido");
	}
}
/*Exercicio 13, aluno: João Victor*/

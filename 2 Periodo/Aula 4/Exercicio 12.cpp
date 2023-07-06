#include <stdio.h>
#include <cstdlib>

main()
{
	float S,VF,P,VP;
	printf("Informe seu salario:");
	scanf("%f",&S);
	if (S<800)
	{
		printf("Com esse salario nao podemos fazer o financiamento.");
	}
	else
	if (S>1500)
	{
		printf("Com esse salario nao podemos fazer o financiamento.");
	}
	else
	{
		printf("Informe o valor desejado:");
		scanf("%f",&VF);
		printf("Informe a quantidade de parcelas:");
		scanf("%f",&P);
		VP=((VF*(0.015+1))/P);
		if (VP<=(0.3*S))
		{
			printf("O valor da parcela sera: %.2f",VP);
		}
		else
		{
			printf("Valor negado, pois o valor da parcela e maior que 30 porcento do seu salario.");
		}
	}
}
/*Exercicio 12, aluno: João Victor*/

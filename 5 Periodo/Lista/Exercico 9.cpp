#include<stdio.h>
#include<cstdlib>
#include<math.h>
#include <locale.h>

void cal();
void financiamento();

float sal;

main() 
{
	setlocale(LC_ALL,"");
	printf("Digite o valor do salário: ");
	scanf("%f",&sal);
	financiamento();
}
	
	void financiamento() 
{
	if (sal<799)
	{
		printf("Financiamento não autorizado.");
	}	
	else
	{
		((sal=800)&&(sal>1500));
		cal();
	}
}
	void cal()
{
	int emp,parc,vparc,cal,jm,total;
	float vmes;
	printf("Financiamento autorizado.\n");
	printf("Digite um valor para o financiamento: ");
	scanf("%d",&emp);
	printf("Digite numero de parcelas: ");
	scanf("%d",&parc);
	vparc=sal*0.30;
	cal=emp/parc;
	jm=(1,5*parc);
	total=emp+jm;
	vmes=total/parc;
	if(vmes<vparc)
	{
		printf("Financiamento liberado.\n");
		printf("O valor das parcelas por mês, com 15 porcentos de juros será: %.2f",vmes);
	}
	else
	{
		if(vmes>vparc)
		printf("Financiamento não autorizado.");
	}
	
}

// Faça um programa que solicite o salário de um indivíduo, verifique e informe se o mesmo pode contratar um financiamento. Para poder usar o financiamento o salário deve ficar entre R$ 800,00 e R$ 1.500,00. Caso
// possa usar esse financiamento, solicitar o valor desejado e a quantidade de parcelas, calcular e informar o valor da parcela, com juros de 1,5% ao mês. Exibir uma mensagem de financiamento não autorizado caso a
// parcela ultrapasse 30% do salário. Faça todos os cálculos e mostre os resultados através de funções.
// Aluno: João Victor

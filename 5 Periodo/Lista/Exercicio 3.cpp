#include<stdio.h>
#include<cstdlib>
#include <locale.h>

void funcao(int x);

main ()
{
	setlocale(LC_ALL,"");
	int x;
	printf("Digite um valor para X: ");
	scanf("%d",&x);
	funcao(x);
}
	
	void funcao(int x)
{
	if (x==0)
	printf("É zero.");
	
	else
	{
	
	if ((x%2)==0)
	printf("É par.");
	
	else
	printf("É impar.");
	
	if (x>0)
	printf("E é positivo.");
	
	else
	printf("E é negativo.");

	}
	
}

// Faça um programa que solicite um número. Crie uma função para dizer se o número é igual a zero. Caso não seja, a função deverá verificar se o número é par ou impar e positivo ou negativo.
// Aluno: João Victor

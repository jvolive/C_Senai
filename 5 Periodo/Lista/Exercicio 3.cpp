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
	printf("� zero.");
	
	else
	{
	
	if ((x%2)==0)
	printf("� par.");
	
	else
	printf("� impar.");
	
	if (x>0)
	printf("E � positivo.");
	
	else
	printf("E � negativo.");

	}
	
}

// Fa�a um programa que solicite um n�mero. Crie uma fun��o para dizer se o n�mero � igual a zero. Caso n�o seja, a fun��o dever� verificar se o n�mero � par ou impar e positivo ou negativo.
// Aluno: Jo�o Victor

#include <stdio.h>
#include <cstdlib>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	int i,x[8],y,z,p=0,a=0;
	
	for(i=0;i<9;i++)
	{
		printf("Digite um n�mero: ");
		scanf("%d",&x[i]);
		if(x[i]%2==0)
		{
			z=x[i];
			p++;
		}
		else
		y=x[i]+1;
		a++;
	}
	printf("O valor da soma dos �mpares �: %d",y);
}
/*Exercicio 3:Fa�a um programa que leia 8 n�meros dentro de um vetor, e fa�a a soma
apenas dos n�meros �mpares. Apresentar o resultado da opera��o; Aluno: Jo�o Victor*/

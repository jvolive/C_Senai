#include <stdio.h>
#include <cstdlib>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	int i,x[8],y,z,p=0,a=0;
	
	for(i=0;i<9;i++)
	{
		printf("Digite um número: ");
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
	printf("O valor da soma dos ímpares é: %d",y);
}
/*Exercicio 3:Faça um programa que leia 8 números dentro de um vetor, e faça a soma
apenas dos números ímpares. Apresentar o resultado da operação; Aluno: João Victor*/

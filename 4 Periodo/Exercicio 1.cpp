#include <stdio.h>
#include <cstdlib>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	int i,a[10],s=0,m=0;
	
	for(i=0;i<10;i++)
	{
		printf("Digite um número: ");
		scanf("%d",&a[i]);
		s=s+a[i];
	
	}
	m=s/10;
	printf("A média entre esses números é: %d",m);
}
/*Exercicio 1, aluno: João Victor*/

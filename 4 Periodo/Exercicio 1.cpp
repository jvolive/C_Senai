#include <stdio.h>
#include <cstdlib>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	int i,a[10],s=0,m=0;
	
	for(i=0;i<10;i++)
	{
		printf("Digite um n�mero: ");
		scanf("%d",&a[i]);
		s=s+a[i];
	
	}
	m=s/10;
	printf("A m�dia entre esses n�meros �: %d",m);
}
/*Exercicio 1, aluno: Jo�o Victor*/

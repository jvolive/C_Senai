#include<stdio.h>
#include<cstdlib>
#include <locale.h>

void função(int x);

main ()
{
	setlocale(LC_ALL,"");
	int x;
	printf("Digite um valor para X:");
	scanf("%d",&x);
	teste(x);
}
	
	void função(int x)
{
	if (x==0)
	printf(" e zero \n\n");
	
	else
	{
	
	if ((x%2)==0)
	printf("É par.");
	
	else
	printf("É impar.");
	
	if (x>0)
	printf("É positivo.");
	
	else
	printf("É negativo.");

	}
	
}

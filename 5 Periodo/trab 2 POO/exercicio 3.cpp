#include<stdio.h>
#include<cstdlib>
#include <locale.h>

void fun��o(int x);

main ()
{
	setlocale(LC_ALL,"");
	int x;
	printf("Digite um valor para X:");
	scanf("%d",&x);
	teste(x);
}
	
	void fun��o(int x)
{
	if (x==0)
	printf(" e zero \n\n");
	
	else
	{
	
	if ((x%2)==0)
	printf("� par.");
	
	else
	printf("� impar.");
	
	if (x>0)
	printf("� positivo.");
	
	else
	printf("� negativo.");

	}
	
}

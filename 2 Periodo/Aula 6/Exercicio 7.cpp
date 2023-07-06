#include <stdio.h>
#include <cstdlib>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	int i,n,x=0;
	
	do
	{
		printf("Informe um número: ");
		scanf("%d",&n);
	}while(n<=0);
	for(i=1;i<=n;i++)
	{
	if(n%i==0)
	{
	x++;
	}
	}
	if(x==2)
		printf("Esse número é primo: %d",n);
	else
		printf("Esse número não é primo: %d",n);
}

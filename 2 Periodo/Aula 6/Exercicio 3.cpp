#include <stdio.h>
#include <cstdlib>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	int n,m,s=0,c=0;
	do
	{
		printf("Digite um n�mero: ");
		scanf("%d",&n);
		s=s+n;
		c++;
	}
	while(c!=10);
	n=s/c;
	printf("A m�dia �: %d",n);
}


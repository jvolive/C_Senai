#include <stdio.h>
#include <cstdlib>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	int c=0,n,x;
	float m;
	
	do
	{
		printf("Informe um n�mero: ");
		scanf("%d",&n);
		x=x+n;
		c++;
	}while (c!=10);
	m=x/10;
	printf("A m�dia entre esses n�meros e: %.2f",m);
}

#include <stdio.h>
#include <cstdlib>

main()
{
	int X,Y,B,E;
	printf("Informe o valor da base: ");
	scanf("%d",&B);
	printf("Informe o valor do expoente: ");
	scanf("%d",&E);
	for (X=1; X<=E; X++)
	Y=Y*B;
	printf("%d elevado a %d = %d",B,E,Y);
}

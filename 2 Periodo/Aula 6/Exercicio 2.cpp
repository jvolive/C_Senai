#include <stdio.h>
#include <cstdlib>
#include <locale.h>

main()
{
	int x = 0,y = 1,z = 0,c = 0;
	printf("0 1 ");
	do
	{
		z=x+y;
		printf("%d ",z);
		x=y;
		y=z;
		c++;
	}
	while (c!=10);
}

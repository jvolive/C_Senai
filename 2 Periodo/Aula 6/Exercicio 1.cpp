#include <stdio.h>
#include <cstdlib>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	int c = 2,s = 0;
	do
	{
		s = s + c;
		c+=2;
	}
	while (c!=100);
	printf("A soma é %d",s);
}

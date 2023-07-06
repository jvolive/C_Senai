#include <stdio.h>
#include <cstdlib>

main()
{
	float F,C;
	printf("Informe a temperatura em graus Fahrenheit: ");
	scanf("%f",&F);
	C=((F-32)*5)/9;
	printf("A temperetura em graus Celsius sera: %.f",C);
}

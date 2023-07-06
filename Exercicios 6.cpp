#include <stdio.h>
#include <cstdlib>

main()
{
	float C,F;
	printf("Informe a temperatura em grau Celsius: ");
	scanf("%f",&C);
	F=(9*C+160)/5;
	printf("A temperatura em Fahrenheit sera: %f",F);
}

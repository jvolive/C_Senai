#include<stdio.h>
#include<cstdlib>
#include<math.h>

void conversao();

main()
{
	float a,b;
	printf("digite o valor de a");
	scanf("%f",&a);
    printf("digite o valor de b");
	scanf("%f",&b);	
}
	
	void conversao() 
{
	
	float kg,g,m,cm;
	printf(" digite um valor em kg \n\n ");
	scanf("%f",&kg);
	printf(" digite um valor em g \n\n ");
	scanf("%f",&g);
	kg=g/1000;
	printf(" o resultado da conversão e %f \n\n ",kg);
	printf(" digite um valor em cm \n\n");
	scanf("%f",&cm);
	printf(" digite um valor em m \n\n");
	scanf("%f",&m);
	cm=m/100;
	printf(" o resultado da conversão é %f \n\n ",kg);
	
}

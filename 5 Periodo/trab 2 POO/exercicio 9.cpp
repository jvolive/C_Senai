#include<stdio.h>
#include<cstdlib>
#include<math.h>

void financeiro();

main() 
{
	
	float s;
	printf(" digite o valor do salário \n\n ");
	scanf("%f",&s);
}
	
	void financeiro() 
{
	
	float s, fin, val, parc;
	if((s=800)&&(s>1500));
	printf(" financiamento autorizado \n\n");
	scanf("%f",&fin);
	printf(" digite um valor \n\n");
	scanf("%f",&val);
	printf(" digite numero de parcela \n\n");
	scanf("%f",&parc);
	fin=parc*0.015;
	if(fin>30);
	printf(" financiamento não autorizado \n\n");	
	
}

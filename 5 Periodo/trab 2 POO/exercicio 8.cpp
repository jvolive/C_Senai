#include<stdio.h>
#include<cstdlib>
#include<math.h>
#include <locale.h>

float rea(int a);

main()
{
	setlocale(LC_ALL,"");	
	float s;
	printf("Digite o valor do salario: ");
	scanf("%f",&s);
	rea(s);
}	
	
	float rea(int a)
{
	int b;
    if(b<500)
    b=(b=a*0.15);
    printf(" o reajuste salarial e %f \n\n ",b);
    if((b>=500) &&(b<=1000));
    b=(b=a*0.10);
    printf(" o reajuste salarial e %f \n\n ",b);
    if(b>1000);
    b=(b=a*0.05);
    printf(" o reajuste salárial e %f \n\n ",b);

}

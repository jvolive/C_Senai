#include <stdio.h>
#include <cstdlib>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	float s;
	
	printf("Informe seu sal�rio: ");
	scanf("%f",&s);
	
	while((s<0)||(s==0))
	{
		printf("Sal�rio invalido, Digite outro: ");
		scanf("%f",&s);
	}
	if (s<500)
	{
		s=((s*15)/100)+s;
		printf("Esse � o reajuste para sal�rios menores que 500 reais: %.2f",s);
	}else
	if((s>=500)&&(s<=1000))
	{
		s=((s*10)/100)+s;
		printf("Esse � o reajuste para sal�rios maiores e iguais a 500 reais e menores e iguais a 1000 reais: %.2f",s);
	}else
	if (s>1000)
	{
		s=((s*5)/100)+s;
		printf("Esse � o reajuste para sal�rios maiores que 1000 reais: %.2f",s);
	}
}

#include <stdio.h>
#include <cstdlib>

main()
{
	char nome[25];
	float SF,VM,CM;
	printf("Digite seu nome: ");
	scanf("%s",&nome);
	printf("Informe seu salario fixo: ");
	scanf("%f",&SF);
	printf("Informe sua venda no mes: ");
	scanf("%f",&VM);
	CM=((VM*15)/100)+SF;
	printf("Sua renda ao final do mes sera: %.f",CM);
}

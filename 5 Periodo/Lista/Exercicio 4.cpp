#include<stdio.h>
#include<cstdlib>
#include <locale.h>

void media(float x);

main()
{
	setlocale(LC_ALL,"");	
	int a,b,c;
	float med;
	printf("Digite um valor para A: ");
	scanf("%d",&a);
	media (a);
	printf("Digite um valor para B:");
	scanf("%d",&b);
	media (b);
	printf("Digite um valor para C:");
	scanf("%d",&c);
	media(c);
	med=(a+b+c)/3;
	printf("A media �: %.1f",med);
	
}
	
	void media(float x)
{
    while ((x<0)||(x>10)) 
    {
	    printf("Numero invalido.");
	    printf("Digite novamente:");
		scanf("%f",&x);
    }
}

// Fa�a um programa que calcule a m�dia entre tr�s n�meros. Crie uma fun��o para validar os n�meros e n�o permitir que sejam informados n�meros <0 ou >10.
// Aluno: Jo�o Victor

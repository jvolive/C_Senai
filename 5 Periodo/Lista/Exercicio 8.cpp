#include<stdio.h>
#include<cstdlib>
#include<math.h>
#include <locale.h>

int rea(float x);
void menor(float x);
void meio(float x);
void mil(float x);


main()
{
	setlocale(LC_ALL,"");	
	float s;
	printf("Digite o valor do salario: ");
	scanf("%f",&s);
	rea(s);
}
	int rea(float x)
	{
		if(x<500)
		{
			menor(x);
		}
		if((x>=500) && (x<1000))
		{
			meio(x);
		}
		if(x>=1000)
		{
			mil(x);
		}
	}
	
	void menor(float x)
	{
		float r;	
		{
    		r=x*0.15;
    		printf("O reajuste salarial � de: %.2f",r);
		}
	}
	void meio(float x)
	{
    	float r;
    	{
    		r=x*0.10;
    		printf("O reajuste salarial �: %.2f",r);
		}
	}
	void mil(float x)
	{
		float r;
		{
    		r=x*0.05;
    		printf("O reajuste sal�rial �: %.2f",r);
		}
	}

// Fa�a um programa que solicite o sal�rio de um indiv�duo e calcule o percentual de reajuste desse sal�rio, conforme a seguir: Para sal�rio menor que R$ 500,00 �reajuste de 15%, para sal�rio maior ou igual a R$
//500,00 e menor ou igual a R$ 1.000,00 �reajuste de 10%, para sal�rio maior que R$ 1.000,00 �reajuste de 5%. Fa�a cada c�lculo de reajuste atrav�s de uma fun��o. Exiba o resultado atrav�s de outra fun��o.
// Aluno: Jo�o Victor

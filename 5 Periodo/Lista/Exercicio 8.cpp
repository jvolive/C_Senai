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
    		printf("O reajuste salarial é de: %.2f",r);
		}
	}
	void meio(float x)
	{
    	float r;
    	{
    		r=x*0.10;
    		printf("O reajuste salarial é: %.2f",r);
		}
	}
	void mil(float x)
	{
		float r;
		{
    		r=x*0.05;
    		printf("O reajuste salárial é: %.2f",r);
		}
	}

// Faça um programa que solicite o salário de um indivíduo e calcule o percentual de reajuste desse salário, conforme a seguir: Para salário menor que R$ 500,00 –reajuste de 15%, para salário maior ou igual a R$
//500,00 e menor ou igual a R$ 1.000,00 –reajuste de 10%, para salário maior que R$ 1.000,00 –reajuste de 5%. Faça cada cálculo de reajuste através de uma função. Exiba o resultado através de outra função.
// Aluno: João Victor

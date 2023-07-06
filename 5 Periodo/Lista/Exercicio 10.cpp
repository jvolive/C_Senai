#include <stdio.h>
#include <cstdlib>
#include <locale.h>
#include <math.h>

void escolha();
int kmpmi(int v);  //km p/ milhas
int cmpmm(int v);  //cm p/ mm
int cmppol(int v);  //cm p/ pol
int lpga(int v);  //litros p/ galão
int kgpton(int v);  //kg p/ ton
int gpkg(int v);  //g p/ kg
int kgppsi(int v);  //kg/cm p/ psi

float v1;

main()
{
	setlocale(LC_ALL,"");
	int esc;
	float r;
	printf("Digite um valor: ");
	scanf("%f",v1);
	escolha();
	scanf("%d",esc);
	switch(esc)
	{
		case 1:
			{
				r=kmpmi(v1);
				printf("O valor da conversão é: %.2f",r);
				break;
			}
		case 2:
			{
				r=cmpmm(v1);
				printf("O valor da conversão é: %.2f",r);
				break;
			}
		case 3:
			{
				r=cmppol(v1);
				printf("O valor da conversão é: %.2f",r);
				break;
			}
		case 4:
			{
				r=lpga(v1);
				printf("O valor da conversão é: %.2f",r);
				break;
			}
		case 5:
			{
				r=kgpton(v1);
				printf("O valor da conversão é: %.2f",r);
				break;
			}
		case 6:
			{
				r=gpkg(v1);
				printf("O valor da conversão é: %.2f",r);
				break;
			}
		case 7:
			{
				r=kgppsi(v1);
				printf("O valor da conversão é: %.2f",r);
				break;
			}
	}
}

void escolha()
{
	printf("Escolha a conversão:\n");
	printf("1- Km para milhas.\n");
	printf("2- Cm para mm.\n");
	printf("3- Cm para polegadas.\n");
	printf("4- Litros para galão.\n");
	printf("5- Kg para toneladas.\n");
	printf("6- G para Kg.\n");
	printf("7- Kg/cm² para PSI.\n");
}

int kmpmi(int v)
{
	float r;
	r=v/1,609;
	return(r);
}

int cmpmm(int v)
{
	float r;
	r=v*10;
	return(r);
}

int cmppol(int v)
{
	float r;
	r=v/2,54;
	return(r);
}

int lpga(int v)
{
	float r;
	r=v/4,546;
	return(r);
}

int kgpton(int v)
{
	float r;
	r=v/1000;
	return(r);
}

int gpkg(int v)
{
	float r;
	r=v/1000;
	return(r);
}

int kgppsi(int v)
{
	float r;
	r=v*14,223;
	return(r);
}

// Faça um programa que informe ao usuário um menu com opções de conversão de unidades (km para milhas, cm para mm, cm para pol, litros
// para galão, kg para ton, gramas para kg, kg/cm2 para psi e outras que achar importante. O programa deverá solicitar um valor em determinada
// unidade, converter e apresentar a conversão para a unidade correspondente. Faça uma função para cada cálculo e mostre o resultado através de uma outra função.
// Aluno: João Victor

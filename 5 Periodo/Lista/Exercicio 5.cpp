#include <stdio.h>
#include <cstdlib>
#include <locale.h>

float media(float a,float b);
float media1(float a,float b,float c);
float media2(float a,float b,float c,float d);
void escolha();

main()
{
	setlocale(LC_ALL,"");
	int ope;
	float a,b,c,d,r;
	printf("Digite o primeiro valor: ");
	scanf("%f",&a);
	printf("Digite o segundo valor: ");
	scanf("%f",&b);
	printf("Digite o terceiro valor: ");
	scanf("%f",&c);
	printf("Digite o quarto valor: ");
	scanf("%f",&d);
	escolha();
	scanf("%d",&ope);
	switch(ope)
	{
		case 1:
		{
			r=media(a,b);
			printf("O resultado é: %.2f",r);
			break;
		}
		case 2: 
		{
			r=media1(a,b,c);
			printf("O resultado é: %.2f",r);
			break;
		}
		case 3:
		 {
		 	r=media2(a,b,c,d);
		 	printf("O resultado é: %.2f",r);
			break;
		}
	
	}
}

void escolha()
{
	printf("1- Calcular com dois números. \n");
	printf("2- Calcular com três números. \n");
	printf("3- Calcular com quatro números. \n");
}

float media(float a,float b)
{
	float r;
	r=(a+b)/2;
	return (r);
}

float media1(float a,float b,float c)
{
	float r;
	r=(a+b+c)/3;
	return (r);
}

float media2(float a,float b,float c,float d)
{
	float r;
	r=(a+b+c+d)/4;
	return (r);
}

// Implemente o programa acima, dando opção da quantidade de números que o usuário quer calcular a média. O programa deverá dar opção de calcular a média entre 2, 3 e 4 números. Use também uma função para mostrar o resultado da média.
// Aluno: João Victor

#include<stdio.h>
#include<cstdlib>
#include <locale.h>
#include <math.h>

void seg();
void tres();
void tre();
void qua();

int a,b;
float r,med;

main()
{
	setlocale(LC_ALL,"");
    printf("Digite um valor para A: ");
    scanf("%d",&a);
	printf("Digite um valor para B maior que A: ");
    scanf("%d",&b);
    seg();
    tres();
    tre();
    qua();
}

void seg()
{
	
	 r=a+b;
	 printf("O resultado da soma é: %.0f \n",r);
	 r=a-b;
	 printf("O resultado da subtração é: %.0f \n ",r);
	 r=a*b;
	 printf("O resultado da multiplicação é: %.0f \n",r);
	 r=a/b;
	 printf("O resulado da divisão é: %.1f \n",r);
}
	
void tres()
{
	if (a==0)
	printf("O valor de A é zero.\n");
	else
	
	{ 
	if ((a%2)==0)
	printf("O valor de A é par.\n");
	else
	printf("O valor de A é impar.\n");
	  
	if (a>0)
	printf("O valor de A é positivo.\n");
	else
	printf("O valor de A é negativo.\n"); 
	}
}

void tre()
{
	if (b==0)
	printf("O valor de B é zero.\n");
	else
	
	{ 
	if ((b%2)==0)
	printf("O valor de B é par.\n");
	else
	printf("O valor de B é impar.\n");
	  
	if (b>0)
	printf("O valor de B é positivo.\n");
	else
	printf("O valor de B é negativo.\n"); 
	}
}
void qua()
{
	med=(a+b)/2;
	printf("A média é %.2f",med);
}
// Implemente os programas 2, 3, 4 e 5 para mostrar o resultado através de uma chamada de função.
// Aluno: João Victor

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
	 printf("O resultado da soma �: %.0f \n",r);
	 r=a-b;
	 printf("O resultado da subtra��o �: %.0f \n ",r);
	 r=a*b;
	 printf("O resultado da multiplica��o �: %.0f \n",r);
	 r=a/b;
	 printf("O resulado da divis�o �: %.1f \n",r);
}
	
void tres()
{
	if (a==0)
	printf("O valor de A � zero.\n");
	else
	
	{ 
	if ((a%2)==0)
	printf("O valor de A � par.\n");
	else
	printf("O valor de A � impar.\n");
	  
	if (a>0)
	printf("O valor de A � positivo.\n");
	else
	printf("O valor de A � negativo.\n"); 
	}
}

void tre()
{
	if (b==0)
	printf("O valor de B � zero.\n");
	else
	
	{ 
	if ((b%2)==0)
	printf("O valor de B � par.\n");
	else
	printf("O valor de B � impar.\n");
	  
	if (b>0)
	printf("O valor de B � positivo.\n");
	else
	printf("O valor de B � negativo.\n"); 
	}
}
void qua()
{
	med=(a+b)/2;
	printf("A m�dia � %.2f",med);
}
// Implemente os programas 2, 3, 4 e 5 para mostrar o resultado atrav�s de uma chamada de fun��o.
// Aluno: Jo�o Victor

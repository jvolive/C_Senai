#include<stdio.h>
#include<cstdlib>
#include<math.h>
#include <locale.h>

void delta();
void prim();
void seg();

int a,b,c,d,x1,x2;

main()
{
	setlocale(LC_ALL,"");
	printf("Digite um valor para A: ");
	scanf("%d",&a);
	printf("Digite um valor para B: ");
	scanf("%d",&b);
	printf("Digite um valor para C: ");
	scanf("%d",&c);
	delta();
	prim();
	seg();
}

void delta() 
 {
	d=(b*b-4*a*c);
	printf("O resultado de delta e %d. \n",d);
 }

void prim()
{
	x1=(-b+sqrt(d))/2*a;
	printf(" a primeira raiz e %d. \n",x1);
}

void seg()
{
	x2=(-b-sqrt(d))/2*a;
	printf(" a segunda raiz e %d. \n",x2);
}

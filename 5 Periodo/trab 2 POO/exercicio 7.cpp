#include<stdio.h>
#include<cstdlib>
#include<math.h>

void equacao();
void raizes();
void delta();

int main()

{

	int a,b,c;
	printf(" digite um valor para: a \n\n ");
	scanf("%d",&a);
	printf(" digite um valor para: b \n\n ");
	scanf("%d",&b);
	printf(" digite um valor para: c \n\n ");
	scanf("%d",&c);
}

	void delta() 
 {
	
	float a,b,c,d;
	d=(b*b-4*a*c);
	delta();
	printf(" o resultado de delta e %f \n\n ",d);
 }

	void equcao()
{
	float x,a,b,d;
	x=(-b+-sqrt(d))/2*a;
	printf(" o resultado da equacao %f \n\n ",x); 
}

	void raizes()
{
	
	float x1,x2,a,b,d;
	x1=(-b+sqrt(d))/2*a;
	printf(" a primeira raiz e %f \n\n",x1);
	x2=(-b-sqrt(d))/2*a;
	printf(" a segunda raiz e %f \n\n",x2);
}

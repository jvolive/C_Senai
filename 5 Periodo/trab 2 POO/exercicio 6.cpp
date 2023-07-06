#include<stdio.h>
#include<cstdlib>

void calc();
void test();
void media();

	int a,b,r,med;

main()
{
	
    printf(" digite um valor para: a \n\n ");
    scanf("%d",&a);
	printf(" digite um valor para: b \n\n ");
    scanf("%d",&b);
}

	void calc()
{
	
	 r=a*b;
	 printf(" o resultado da multiplicação e %d \n\n ",r);
	 r=a-b;
	 printf(" o resultado da subtração e %d \n\n ",r);
	 r=a/b;
	 printf(" o resultado da divisão e %d \n\n ",r);
	 r=a+b;
	 printf(" o resultado da soma e %d \n\n ",r);
}
	
	void test()
{
 
	if (x==0)
	printf(" e zero \n\n ");
	else
	
	{ 
	if ((x%2)==0)
	printf(" e par \n\n ");
	else
	printf(" e impar \n\n ");
	  
	if (x>0)
	printf(" e positivo \n\n");
	else
	printf(" e negativo \n\n"); 
	}


}

	void media()
{
	
    printf(" digite um valor para: a \n\n ");
    scanf("%d",&a);
	printf(" digite um valor para: b \n\n ");
    scanf("%d",&b);
    printf(" digite um valor para: r \n\n ");
    scanf("%d",&r);
	med=(a+b+r/3;
	printf(" a media e %d \n\n ",med);
}

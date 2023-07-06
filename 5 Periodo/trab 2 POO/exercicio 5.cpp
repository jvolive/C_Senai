#include<stdio.h>
#include<cstdlib>

void media1();
void media2(); 
void media3();
void media4(); 

main()

{
	
	int a,b;
	printf(" digite um valor para: a \n\n ");
	scanf("%d",&a);
	printf(" digite um valor para: b \n\n ");
	scanf("%d",&b);
}

	void media1()
{
	
	int a,b;
	float med;
	printf(" digite um valor para a \n\n ");
	scanf("%d",&a);
	media1();
	printf(" digite um valor para b \n\n ");
	scanf("%d",&b);
	media1();
	med=(a+b)/2;
	printf(" a primeira media e %f \n\n ",med);
}

	void media2()
{
	
	int a,b;
	float med;
	printf(" digite um valor para: a \n\n ");
	scanf("%d",&a);
	media2();
	printf(" digite um valor para: b \n\n ");
	scanf("%d",&b);
	media2();
	med=(a+b)/2;
	printf(" a segunda media e %f \n\n ",med);
}

	void media3()
{
	
	int a,b,c;
	float med;
	printf(" digite um valor para: a \n\n ");
	scanf("%d",&a);
	media3();
	printf(" digite um valor para: b \n\n ");
	scanf("%d",&b);
	media3();
	printf(" digite um valor para: c \n\n ");
	scanf("%d",&c);
	med=(a+b+c)/3;
	printf(" a terceira media e %f \n\n ",med);
}
	
	void media4()
{
	
	int a,b,c,d;
	float med;
	printf(" digite um valor para: a \n\n\ ");
	scanf("%d",&a);
	media4();
	printf(" digite um valor para: b \n\n ");
	scanf("%d",&b);
	media4();
	printf(" digite um valor para: c \n\n ");
	scanf("%d",&c);
	media4();
	printf(" digite um valor para: d \n\n ");
	scanf("%d",&d);
	media4();
	med=(a+b+c+d)/4;
	printf(" a quarta media e %f \n\n ",med);
}




#include<stdio.h>
#include<cstdlib>

	void media(int med);

main()
{
	int a,b,c,med;
	printf(" digite um valor para a \n\n");
	scanf("%d",&a);
	media (a);
	printf(" digite um valor para b \n\n");
	scanf("%d",&b);
	media (b);
	printf(" digite um valor para c \n\n");
	scanf("%d",&c);
	media(c);
	med=(a+b+c)/3;
	printf(" a media e %d \n\n",med);
	
}
	
	void media(int med)
{
    while ((med<0)||(med>10)) 
    {
	    printf("numero invalido \n\n");
	    printf("digite novamente \n\n");
		scanf("%d",&med);
    }
}

#include <stdio.h>
#include <cstdlib>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	float p=0,p1236=0,q=0,pt=0,pm=0,p12=0,pm12=0;
	int t=0,i36=0,i12=0,idm=0;
	
	printf("Informe a quantidade de bois: ");
	scanf("%f",&q);
	
	do
	{
		printf("Informe quantos meses esse boi tem: ");
		scanf("%d",&idm);
		printf("Informe o peso desse boi: ");
		scanf("%f",&p);
		pt=pt+p;
		if(idm>36)
		{
			i36=i36+1;
		}
		else
		{
		if(idm<12)
		{
			i12=i12+1;
			p12=p12+p;
		}
		else
		{
			p1236=p1236+pt;
		}
		}
		t++;
		}
		while(t<q);
		pm=(pt/q);
		pm12=(p12/i12);
		printf("O peso medio dos bois é: %.2f\n",pm);
		printf("Bois com mais de 36 meses é: %.2d\n",i36);
		printf("Peso médio dos bois menores de 12 meses é: %.2f\n",pm12);
		printf("O peso total dos bois é: %.2f\n",p1236);
		}

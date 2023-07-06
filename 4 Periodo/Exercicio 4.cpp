#include <stdio.h>
#include <cstdlib>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	int i,x[5],y,z,p=0,a=0;
	
	for(i=0;i<6;i++)
	{
		printf("Digite um número: ");
		scanf("%d",&x[i]);
		if(x[i]%2==0)
		{
			z=x[i]+1;
			p++;
		}
		else
		y=x[i];
		a++;
	}
	printf("O valor da soma dos ímpares é: %d",y);
}

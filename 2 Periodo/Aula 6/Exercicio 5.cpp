#include <stdio.h>
#include <cstdlib>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	int js=0,p=0,jo=0,vt,c=0;
	
	while(c!=15)
	{
		printf(" \nDigite 1,Se quiser votar no candidato João dos Santos\n ");
		printf("\nDigite 2,Se quiser votar no candidato Pedro dos Anjos\n ");
		printf("\nDigite 3,Se quiser votar no candidato José da Silva\n ");
		scanf("%d",&vt);
		switch (vt)
		{
			case 1: jo=jo+1;
			break;
			case 2: p=p+1;
			break;
			case 3: js=js+1;
			break;	
		}
		c=c+1;
		{
			printf("O canditado João dos Santos ficou com a seguinte votação: %d\n",jo);
			printf("O canditado Pedro dos Anjos ficou com a seguinte votação: %d\n",p);
			printf("O canditado José da Silva ficou com a seguinte votação: %d\n",js);
		}
		
	}
}

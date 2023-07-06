#include <stdio.h>
#include <cstdlib>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	int X,Y,RX,RY,OP;
	printf("Plano cartesiano \n");
	printf ("1 - Primeiro quadrante \n");
	printf ("2 - Segundo quadrante \n");
	printf ("3 - Terceiro quadrante \n");
	printf ("4 - Quarto quadrante \n");
	printf("Informe o valor do eixo X: ");
	scanf("%d",&X);
	printf("Informe o valor do eixo Y: ");
	scanf("%d",&Y);
	printf("Escolha uma opção: ");
	scanf("%d",&OP);
	switch(OP)
	{
		case 1:{
				printf("A cordenada do primeiro quadrante é: %d,%d",X,Y);
				break;
				}
		case 2:{
				RX=(X*-1);
				printf("A cordenada do segundo quadrante é: %d,%d",RX,Y);
				break;
				}
		case 3:{
				RX=(X*-1);
				RY=(Y*-1);
				printf("A cordenada do terceiro quadrante é: %d,%d",RX,RY);
				break;
				}
		case 4:{
				RY=(Y*-1);
				printf("A cordenada do quarto quadrante é: %d,%d",X,RY);
				break;
		}
	}
}

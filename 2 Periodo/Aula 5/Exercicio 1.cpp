#include <stdio.h>
#include <cstdlib>
#include <locale.h>
#include <math.h>

main()
{
	setlocale(LC_ALL,"");
	float R,N1,N2;
	int OP;
	printf("Calculadora.\n");
	printf("1 - Soma.\n");
	printf("2 - Subtração.\n");
	printf("3 - Divisão.\n");
	printf("4 - Multiplicação.\n");
	printf("5 - Potenciação.\n");
	printf("Informe o primeiro numero: ");
	scanf("%f",&N1);
	printf("Informe o segundo numero: ");
	scanf("%f",&N2);
	printf("Escolha uma operação ");
	scanf("%d",&OP);
	switch(OP)
	{
	case 1:{
			R=N1+N2;
			printf("O resultado da soma é %.2f",R);
			break;
			}
	case 2:{
			R=N1-N2;
			printf("O resultado da subtração é %.2f",R);
			break;
			}
	case 3:{
			R=N1/N2;
			printf("O resultado da divisão é %.2f",R);
			break;
			}
	case 4:{
			R=N1*N2;
			printf("O resultado da multiplicação é %.2f",R);
			break;
			}
	case 5:{
			R=pow(N1,N2);
			printf("O resultado da pontenciação é: %.2f",R);
			break;
	}
	default:printf("Opção invalida"); 				
}
}

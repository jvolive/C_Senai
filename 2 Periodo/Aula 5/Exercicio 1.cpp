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
	printf("2 - Subtra��o.\n");
	printf("3 - Divis�o.\n");
	printf("4 - Multiplica��o.\n");
	printf("5 - Potencia��o.\n");
	printf("Informe o primeiro numero: ");
	scanf("%f",&N1);
	printf("Informe o segundo numero: ");
	scanf("%f",&N2);
	printf("Escolha uma opera��o ");
	scanf("%d",&OP);
	switch(OP)
	{
	case 1:{
			R=N1+N2;
			printf("O resultado da soma � %.2f",R);
			break;
			}
	case 2:{
			R=N1-N2;
			printf("O resultado da subtra��o � %.2f",R);
			break;
			}
	case 3:{
			R=N1/N2;
			printf("O resultado da divis�o � %.2f",R);
			break;
			}
	case 4:{
			R=N1*N2;
			printf("O resultado da multiplica��o � %.2f",R);
			break;
			}
	case 5:{
			R=pow(N1,N2);
			printf("O resultado da pontencia��o �: %.2f",R);
			break;
	}
	default:printf("Op��o invalida"); 				
}
}

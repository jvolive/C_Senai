#include <stdio.h>
#include <math.h>
#include<cstdlib>
#include<locale.h>
main()
{
	float r,n1,n2;
	int op;
	printf("Calculadora \n");
	printf("1 - Soma.\n");
	printf("2 - Subtra��o.\n");
	printf("3 - Divi�ao.\n");
	printf("4 - Multiplica�ao.\n");
	printf("5 - Potencia�ao.\n");
	printf("Digite um n�mero");
	scanf("%f", &n1);
	printf("Digite outro numero");
	scanf("%f", &n2 );
	printf("Escolha uma opera��o");
	scanf("%d", &op);
	switch(op)
	{
	case 1:{
		r = n1+n2;
		printf("O resultado da soma � %f",r);
		break;
	}
	case 2:{
		r = n1-n2;
	    printf("O resultado da subtra�ao � %f",r);
		break;
	}
	case 3:{
		r = n1/n2;
	    printf("O resultado da divisao � %f",r);
		break;
	}
	case 4:{
		r = n1*n2;
	    printf("O resultado da multiplica�ao � %f",r);
		break;
	}
	case 5:{
		r = pow(n1,n2);
		printf("O resultado da potencia�ao � %f",r);
		break;
	}
	default:printf("Op��o invalida");
    }
}

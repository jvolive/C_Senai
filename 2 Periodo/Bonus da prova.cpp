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
	printf("2 - Subtração.\n");
	printf("3 - Diviçao.\n");
	printf("4 - Multiplicaçao.\n");
	printf("5 - Potenciaçao.\n");
	printf("Digite um número");
	scanf("%f", &n1);
	printf("Digite outro numero");
	scanf("%f", &n2 );
	printf("Escolha uma operação");
	scanf("%d", &op);
	switch(op)
	{
	case 1:{
		r = n1+n2;
		printf("O resultado da soma é %f",r);
		break;
	}
	case 2:{
		r = n1-n2;
	    printf("O resultado da subtraçao é %f",r);
		break;
	}
	case 3:{
		r = n1/n2;
	    printf("O resultado da divisao é %f",r);
		break;
	}
	case 4:{
		r = n1*n2;
	    printf("O resultado da multiplicaçao é %f",r);
		break;
	}
	case 5:{
		r = pow(n1,n2);
		printf("O resultado da potenciaçao é %f",r);
		break;
	}
	default:printf("Opção invalida");
    }
}

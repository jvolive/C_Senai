#include<stdio.h>
#include<cstdlib>

void numeros();//fun��o de numeros sem parametros 
void multiplicao();//fun��o de multiplica��o sem parametro 
void subtracao();//fun��o de subtra��o sem parametro 
void divisao();//fun��o de divis�o sem parametros
void soma();//fun�ao de soma sem parametros 

	int R,v1,v2;

main()//fun��o principal


{
  	int op;
  	
	numeros();
	printf("1- multiplicao \n\n");
	printf("2- subtracao \n\n");
	printf("3- divisao \n\n");
	printf("4- soma \n\n");
	printf(" escolha sua op��o ");
	scanf("%d",&op);
	switch(op)
	
	{
		case 1:soma();
		break;
	    case 2:subtracao();
		break;
	    case 3:divisao();
		break;	
		case 4:multiplicao();
		break;
		default:printf(" op��o invalida ");
					
	}	
	
}
 	
	void numeros()//fun��o da soma 
	{
		printf(" digite um valor para v1 \n\n ");
		scanf("%d",&v1);
		printf(" digite outro valor para v2 \n\n ");
		scanf("%d",&v2);
	}
	
	void multiplicao()//fun�ao da multiplica��o
 	{
	 	R=v1*v2;
	 	printf(" o resultado da  multiplica��o � %d \n\n",R);
 	}
 	
 	void subtracao()//fun��o da subtra��o
 	{
	 	R=v1-v2;
	 	printf(" o resultado da subtra��o � %d \n\n",R);
 	}
   	
	void divisao()//fun��o da divis�o 
 	{
	 	R=v1/v2;
	 	printf(" o resultado da divis�o � %d \n\n",R);
	}
   	
   	void soma()//fun��o da soma 
 	{
	 	R=v1+v2;
	 	printf(" o resultado da somas � %d \n\n",R);
 	}
	
	


#include<stdio.h>
#include<cstdlib>

void numeros();//função de numeros sem parametros 
void multiplicao();//função de multiplicação sem parametro 
void subtracao();//função de subtração sem parametro 
void divisao();//função de divisão sem parametros
void soma();//funçao de soma sem parametros 

	int R,v1,v2;

main()//função principal


{
  	int op;
  	
	numeros();
	printf("1- multiplicao \n\n");
	printf("2- subtracao \n\n");
	printf("3- divisao \n\n");
	printf("4- soma \n\n");
	printf(" escolha sua opção ");
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
		default:printf(" opção invalida ");
					
	}	
	
}
 	
	void numeros()//função da soma 
	{
		printf(" digite um valor para v1 \n\n ");
		scanf("%d",&v1);
		printf(" digite outro valor para v2 \n\n ");
		scanf("%d",&v2);
	}
	
	void multiplicao()//funçao da multiplicação
 	{
	 	R=v1*v2;
	 	printf(" o resultado da  multiplicação é %d \n\n",R);
 	}
 	
 	void subtracao()//função da subtração
 	{
	 	R=v1-v2;
	 	printf(" o resultado da subtração é %d \n\n",R);
 	}
   	
	void divisao()//função da divisão 
 	{
	 	R=v1/v2;
	 	printf(" o resultado da divisão é %d \n\n",R);
	}
   	
   	void soma()//função da soma 
 	{
	 	R=v1+v2;
	 	printf(" o resultado da somas é %d \n\n",R);
 	}
	
	


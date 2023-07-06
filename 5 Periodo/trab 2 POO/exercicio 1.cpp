#include<stdio.h>
#include<cstdlib>

void multiplica(int v1,int v2);
void subtrai(int v1,int v2);
void divide(int v1,int v2);
void soma(int v1,int v2);

main()
{
	int v1,v2,op;
	printf("digite um valor para v1 \n\n");
	scanf("%d",&v1);
	printf("digite um valor para v2 \n\n");
	scanf("%d",&v2);
	printf(" 1- multiplicao \n\n");
	printf(" 2- subtracao \n\n");
	printf(" 3- divisao \n\n");
	printf(" 4- soma \n\n");
	printf(" digite uma opção \n\n");
	scanf("%d",&op);
	switch(op)
	
	
	{
		case 1:multiplicao(v1,v2);
		break;
	    case 2:subtracao(v1,v2);
		break;
	    case 3:divisao(v1,v2);
		break;	
		case 4:soma(v1,v2);
		break;
		default:printf(" opção invalida ");
					
	}	
}
	void multiplicao(int v1,int v2)	
	{
		int R;
		R=v1*v2;
		printf(" o resultado da mutiplicacao e %d ",R);
	}
 	
  	
	void subtracao(int v1,int v2)
 	{
	 	int R;
	 	R=v1-v2;
	 	printf(" o resultado da subtracao e %d ",R);
 	}
   
   	void divisao(int v1,int v2)
 	{	
	 	int R;
	 	R=v1/v2;
	 	printf(" o resultado da divisao e %d ",R);
 	}
   	
	void soma(int v1,int v2)
 	{
	 	int R;
	 	R=v1+v2;
	 	printf(" o resultado da soma e %d ",R);
	}
 

#include <stdio.h>
#include <cstdlib>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	float M,MM,P,G,T,KG,PSI,V;
	int OP;
	printf("Convers�o de Unidades. \n");
	printf("1 - km para milhas \n");
	printf("2 - cm para mm \n");
	printf("3 - cm para pol \n");
	printf("4 - litros para gal�o \n");
	printf("5 - kg para ton \n");
	printf("6 - gramas para kg \n");
	printf("7 - kg/cm2 para psi  \n");
	printf("Informe o valor da unidade: ");
	scanf("%f",&V);
	printf("Escolha uma op��o ");
	scanf("%d",&OP);
	switch(OP)
	{
		case 1:{
				M=V*0.621371;
				printf("O valor de Km para milhas �: %.2f",M);
				break;
				}
		case 2:{
				MM=V*10;
				printf("O valor de cm para mm �: %.2f",MM);
				break;
				}
		case 3:{
				P=V*0.393701;
				printf("O valor de cm para pol �: %.2f",P);
				break;
				}
		case 4:{
				G=V*0.264172;
				printf("O valor de litros para gal�o �: %.2f",G);
				break;
				}
		case 5:{
				T=V*0.001;
				printf("O valor de Kg para toneladas �: %.2f",T);
				break;
				}
		case 6:{
				KG=V*0.001;
				printf("O valor de gramas para Kg �: %.2f",KG);
				break;
				}
		case 7:{
				PSI=V*14.2233;
				printf("O valor de kg/cm2 para psi �: %.2f",PSI);
				break;
				}
	}
}

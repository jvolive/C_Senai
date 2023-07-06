#include <stdio.h>
#include <cstdlib>

main()
{
	float VC,QP,PC1,PC2,PC3,PC4,PC5;
	printf("Digite o valor da compra: ");
	scanf("%f",&VC);
	printf("digite o numero de parcelas: ");
	scanf("%f",&QP);
	PC1=VC;
	PC2=((VC*0.02)+PC1)/2;
	PC3=((VC*0.06)+PC1)/3;
	PC4=((VC*0.08)+PC1)/4;
	PC5=((VC*0.10)+PC1)/5;
	printf("\nO valor em uma vez e: %.2f",PC1);
	printf("\nO valor em duas vezes e: %.2f",PC2);
	printf("\nO valor em tres vezes e: %.2f",PC3);
	printf("\nO valor em quatro vezes e: %.2f",PC4);	
	printf("\nO valor em cinco vezes e: %.2f",PC5);
	
	
}

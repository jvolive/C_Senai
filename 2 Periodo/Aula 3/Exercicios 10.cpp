#include <stdio.h>
#include <cstdlib>

main()
{
	float I,QD,QM;
	printf("Informe sua idade: ");
	scanf("%f",& I);
	QD=I*365;
	QM=I*12;
	printf("\nSua quantidade de dias vivos e: %f",QD);
	printf("\nSeus meses de vida ate aqui sao de: %f",QM);
}

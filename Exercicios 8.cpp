#include <stdio.h>
#include <cstdlib>

main()
{
	float VD,J1,J2,J3,J4,J5,J6,M1,M2,M3,M4,M5,M6;
	printf("Informe o valor do deposito: ");
	scanf("%f",&VD);
	J1=VD*0.7;
	M1=VD+J1;
	J2=VD*0.7*2;
	M2=VD+J2;
	J3=VD*0.7*3;
	M3=VD+J3;
	J4=VD*0.7*4;
	M4=VD+J4;
	J5=VD*0.7*5;
	M5=VD+J5;
	J6=VD*0.7*6;
	M6=VD+J6;
	printf("\nRendimento apos um mes: %.f",M1);
	printf("\nRendimento apos dois meses: %.f",M2);
	printf("\nRendimento apos tres meses: %.f",M3);
	printf("\nRendimento apos quatro meses: %.f",M4);
	printf("\nRendimento apos cincos meses: %.f",M5);
	printf("\nRendimento apos seis meses: %.f",M6);
}

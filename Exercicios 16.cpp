#include <stdio.h>
#include <cstdlib>

main()
{
	float VC1,VC2,VC3,TE,VB,VN,P1,P2,P3,PVBN;
	printf("Informe o quantidade de votos do primeiro candidato: ");
	scanf("%f",&VC1);
	printf("Informe o quantidaade de votos do segundo candidato: ");
	scanf("%f",&VC2);
	printf("Informe o quantidade de votos do terceiro candidato: ");
	scanf("%f",&VC3);
	printf("Informe a quantidade de votos nulos: ");
	scanf("%f",&VN);
	printf("Informe a quantidade de votos brancos: ");
	scanf("%f",&VB);
	TE=VC1+VC2+VC3+VN+VB;
	printf("A soma total dos votos sao: %.2f",TE);
	P1=VC1*100/TE;
	P2=VC2*100/TE;
	P3=VC3*100/TE;
	PVBN=(VB+VN)*100/TE;
	printf("\nA porcentagem de votos do canditado um foi de %.2f",P1);	
	printf("\nA porcentagem de votos do canditado dois foi de %.2f",P2);
	printf("\nA porcentagem de votos do canditado tres foi de %.2f",P3);
	printf("\nA portentagem de votos brancos e nulos foi de: %.2f",PVBN);	
	
	
}

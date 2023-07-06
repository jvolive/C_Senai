#include <stdio.h>
#include <cstdlib>

main()
{
	float km,cg,cm;
	printf("Digite sua distancia percorrida: ");
	scanf("%f",&km);
	printf("Digite o combustivel gasto: ");
	scanf("%f",&cg);
	cm=km/cg;
	printf("Seu consumo medio foi %f km/l",cm);
}

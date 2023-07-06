#include <stdio.h>
#include <cstdlib>

main()
{
	float N1,N2,R;
	printf("Informe o valor de A: ");
	scanf("%f",&N1);
	printf("Informe o valor de B: ");
	scanf("%f",&N2);
	R=N1;
	N1=N2;
	printf("O valor de A e: %.f e o valor de B e: %.f",N2,R);	
}

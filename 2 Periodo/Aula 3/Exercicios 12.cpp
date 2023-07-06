#include <stdio.h>
#include <cstdlib>

main()
{
	float V,C,L,A;
	printf("Informe o comprimento da caixa: ");
	scanf("%f",&C);
	printf("Informe a largura da caixa: ");
	scanf("%f",&L);
	printf("Informe a altura da caixa: ");
	scanf("%f",&A);
	V=C*L*A;
	printf("O volume dessa caixa retangular e: %f",V);
}

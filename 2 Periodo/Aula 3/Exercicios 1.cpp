#include <stdio.h>
#include <cstdlib>

main()
{
	char nome[30];
	float n1,n2,n3,m;
	printf("Digite seu nome: ");
	scanf("%s",nome);
	printf("Informe a primeira nota: ");
	scanf("%f",&n1);
	printf("Informe a segunda nota: ");
	scanf("%f",&n2);
	printf("Informe a terceira nota: ");
	scanf("%f",&n3);
	m=(n1+n2+n3)/3;
	printf("%s, sua media e %f",nome,m);
}

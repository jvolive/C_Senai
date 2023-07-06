#include<stdio.h>
#include<cstdlib>
#include<math.h>
main ()
{
	int A,B,C,D,X1,X2;
	printf("digite valor de A: ");
	scanf("%d",&A);
	printf("digite valor de B: ");
	scanf("%d",&B);
	printf("digite valor de C: ");
	scanf("%d",&C);
	D=B*B-4*A*C;
	X1=(-B+sqrt(D))/(2*A);
	X2=(-B-sqrt(D))/(2*A);
	printf("o valor de delta e %.d",D);
	printf("o valor de x1 e %.d",X1);
	printf("o valor de x2 e %.d",X2);
}

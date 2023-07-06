#include <stdio.h>
#include <cstdlib>

main()
{
float m,n1,n2;
printf("nota 1: ");
scanf("%f",&n1);
printf("nota 2: ");
scanf("%f",&n2);
m = (n1+n2)/2;
printf("Media: %.1f\n",m);
if (m>=7)
{
printf("aluno aprovado");
}
else 
if (m<4)
{
printf("aluno reprovado");
}
else
{
printf("exame final");
}
}

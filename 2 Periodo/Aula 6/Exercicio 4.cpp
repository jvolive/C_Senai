#include <stdio.h>
#include <cstdlib>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
    char sx;
    float alt,maalt,mealt=3,medh=0,medm=0,somah=0,somam=0;
    int h=0,m=0,x,c=0;

    printf("Qual a quantidade de alunos? ");
    scanf("%d",&x);
    do
    {
        printf("Informe o sexo: ");
        scanf("%s",&sx);
        printf("Informe a altura: ");
        scanf("%f",&alt);
        if (alt>maalt)
        {
            maalt=alt;
        }
        if (alt<mealt)
        {
            mealt=alt;
        }
        if (sx=='m')
        {
            h++;
            somah=somah+alt;
        }
             if (sx=='f')
        {
            m++;
            somam=somam+alt;
        }
        c++;
    }
	while (c<x);
    medh=somah/h;
    medm=somam/m;
    printf("A maior altura é: %.2f\n",maalt);
    printf("A menor altura é: %.2f\n",mealt);
    printf("A media de altura dos homens é: %.2f\n",medh);
    printf("A media de altura das mulheres é: %.2f\n",medm);
}

#include <stdio.h>
#include <cstdlib>
#include <locale.h>

int apFalta(int ch, int nf);
int calMed(int v1, int v2);
int n1,n2;
main()
{
	setlocale(LC_ALL,"");
	int ch,tf;
		printf("Digite a primeira nota: ");
		scanf("%d",&n1);
		printf("Digite a segunda nota: ");
		scanf("%d",&n2);
		printf("Digite a carga horária: ");
		scanf("%d",&ch);
		printf("Digite a quantidade de faltas (Horas): ");
		scanf("%d",&tf);
		apFalta(ch,tf);
}

int apFalta(int ch, int nf)
{
	int r;
	
	r=(ch*0.25);
	
	if (nf>r)
	{
		printf("Você está reprovado por falta.");
	}
	else
		calMed(n1,n2);
	
}
int calMed(int v1, int v2)
{
	int m;
	m=((n1+n2)/2);
	if (m>=7)
	{
		printf("Parabens você está aprovado e sua média é: %d\n",m);
	}
	else
		if(m<=7)
	{
		printf("Você está reprovado e sua média é: %d\n",m);
	}
}
// Prova de POO, aluno: João Victor, 5° Período.

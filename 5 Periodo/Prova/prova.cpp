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
		printf("Digite a carga hor�ria: ");
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
		printf("Voc� est� reprovado por falta.");
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
		printf("Parabens voc� est� aprovado e sua m�dia �: %d\n",m);
	}
	else
		if(m<=7)
	{
		printf("Voc� est� reprovado e sua m�dia �: %d\n",m);
	}
}
// Prova de POO, aluno: Jo�o Victor, 5� Per�odo.

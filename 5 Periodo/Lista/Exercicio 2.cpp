#include <stdio.h>
#include <cstdlib>
#include <locale.h>

int soma(int n1,int n2);
int sub(int n1,int n2);
int mult(int n1,int n2);
int divi(int n1,int n2);
void opera();

main()
{
	setlocale(LC_ALL,"");
	int ope;
	int v1,v2,r;
	printf("Digite o primeiro n�mero:");
	scanf("%d",&v1);
	printf("Digite o segundo n�mero: ");
	scanf("%d",&v2);
	opera();
	scanf("%d",&ope);
	switch(ope)
	{
		case 1:
		{
			r=soma(v1,v2);
			printf("O resultado �: %d",r);
			break;
		}
		case 2: 
		{
			r=sub(v1,v2);
			printf("O resultado �: %d",r);
			break;
		}
		case 3:
		 {
		 	r=mult(v1,v2);
		 	printf("O resultado �: %d",r);
			break;
		}
	
		case 4: 
		{
			r=divi(v1,v2);
			printf("O resultado �: %d",r);
			break;
		}
	}
}
void opera()
{
	printf("Qual Opera��o voc� quer realizar? \n");
	printf("1- Adi��o \n");
	printf("2- Subtra��o \n");
	printf("3- Multiplica��o \n");
	printf("4- Divis�o \n");
}
int soma(int n1,int n2)
{
	int r;
	r=n1+n2;
	return (r);
}
int sub(int n1,int n2)
{
	int r;
	r=n1-n2;
	return (r);
}
int mult(int n1,int n2)
{
	int r;
	r=n1*n2;
	return (r);
}
int divi(int n1,int n2)
{
	int r;
	r=n1/n2;
	return (r);
}

// Implemente programa acima, fazendo com que o programa solicite os valores atrav�s de uma fun��o.
// Aluno: Jo�o Victor


#include <stdio.h>
#include <cstdlib>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	int i,a[30],b[30],m=0,s=0,q=0,s1=0,s2=0,k=0,j=0,m1=0,m2=0;
	
	for (i=0;i<11;i++)
	{
		printf("Digite um número: ");
		scanf("%d",&a[i]);
	}

//A)	
		printf("O valores multiplicados por 5 são iguais a:\n");
	for (i=0;i<31;i++)
	{
	if (a[i]%2==0)
	{
		b[i]=(a[i]*5);
		printf("%d x 5 = %d\n",a[i],b[i]);
	}
	}
	
//B)	
		printf("O valores multiplicados por 3 são iguais a:\n");
	for (i=0;i<31;i++)
	{
	if (i%2==1)
	{
		b[i]=(a[i]*3);
		printf("%d x 3 = %d\n",a[i],b[i]);
	}
	}
	
//C)
	for(i=0;i<31;i++)
	{
	if (a[i]%6==0)
	{
		s=s+1;
		q=q+a[i];
	}
	}
		m=q/s;
	printf("A média aritmetica pelos multiplos de 6 são iguais a: %d\n",m);
//D
	for (i=0;i<31;i++)
	{
	if (a[i]%2==0)
	{
		s1=s1+1;
		k=k+a[i];
	}
}
	m1=k/s1;
	printf("A média aritmetica dos pares são: %d\n",m1);
	for (i=0;i<31;i++)
	{
	if (a[i]%2==1)
	{
		s2=s2+1;
		j=j+a[i];
	}
	}
	m2=j/s2;
	printf("A média aritmetica dos impares são: %d\n",m2);
}

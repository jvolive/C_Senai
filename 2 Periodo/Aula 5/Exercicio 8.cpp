#include <stdio.h>
#include <cstdlib>
#include <locale.h>
#include <conio.h>

main()
{
	setlocale(LC_ALL,"");
	float N1,N2,N3;
	int M;
	printf("Informe sua primeira nota: ");
	scanf("%f",&N1);
	printf("Informe sua segunda nota: ");
	scanf("%f",&N2);
	printf("Informe sua terceira nota: ");
	scanf("%f",&N3);
		M=(N1+N2+N3)/3;
	printf("1 - Aluno de conceito D, nota entre zero e quatro \n");
	printf("2 - Aluno de conceito C, nota entre cinco e seis \n");
	printf("3 - Aluno de conceito B, nota entre sete e oito \n");
	printf("4 - Aluno de conceito A, nota entre nove e dez \n");
	printf("Sua media é %d",M);
	switch(M)
	{
		case 	0 ...4:
				{
					
					system("color 04");
					printf("\nAluno de conceito D, nota: %d",M);	
				
					break;
				}
		case   	5 ...6:
				{

					system("color 06");
					printf("\nAluno de conceito C, nota: %d",M);
				
					break;
				}
		case 	7 ...8:
				{
				
					system("color 02");
					printf("\nAluno de conceito B, nota: %d",M);
				
					break;
				}
		case 	9 ...10:
				{
				
					system("color 01");
					printf("\nAluno de conceito A, nota: %d",M);
					
					break;
				}
	}
}

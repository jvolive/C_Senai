#include <stdio.h>
#include <cstdlib>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	int OP;
	printf("Digite um número de um até doze: ");
	scanf("%d",&OP);
	switch(OP)
	{
		case 1:{
				printf("Esse número equivale ao mês de Janeiro");
				break;
				}
		case 2:{
				printf("Esse número equivale ao mês de Fevereiro");
				break;
				}
		case 3:{
				printf("Esse número equivale ao mês de Março");
				break;
				}
		case 4:{
				printf("Esse número equivale ao mês de Abril");
				break;
				}
		case 5:{
				printf("Esse número equivale ao mês de Maio");
				break;
				}
		case 6:{
				printf("Esse número equivale ao mês de Junho");
				break;
				}
		case 7:{
				printf("Esse número equivale ao mês de Julho");
				break;
				}
		case 8:{
				printf("Esse número equivale ao mês de Agosto");
				break;
				}
		case 9:{
				printf("Esse número equivale ao mês de Setembro");
				break;
				}
		case 10:{
				printf("Esse número equivale ao mês de Outubro");
				break;
				}
		case 11:{
				printf("Esse número equivale ao mês de Novembro");
				break;
				}
		case 12:{
				printf("Esse número equivale ao mês de Dezembro");
				break;
				}
		
	}
}

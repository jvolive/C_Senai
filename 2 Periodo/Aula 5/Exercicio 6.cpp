#include <stdio.h>
#include <cstdlib>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	int OP;
	printf("Caixa eletrônico \n");
	printf("1 - Saque \n");
	printf("2 - Deposito \n");
	printf("3 - Extrato \n");
	printf("4 - Saldo \n");
	printf("Escolha uma opçao: ");
	scanf("%d",&OP);
	switch(OP)
	{
		case 1:{
				printf("Você escolheu a opção de Saque ");
				break;
				}
		case 2:{
				printf("Você escolheu a opção de Deposito ");
				break;
				}
		case 3:{
				printf("Você escolheu a opção de Extrato ");
				break;
				}
		case 4:{
				printf("Você escolheu a opção de Saldo ");
				break;
				}
	}
}

#include <stdio.h>
#include <cstdlib>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	int OP;
	printf("Caixa eletr�nico \n");
	printf("1 - Saque \n");
	printf("2 - Deposito \n");
	printf("3 - Extrato \n");
	printf("4 - Saldo \n");
	printf("Escolha uma op�ao: ");
	scanf("%d",&OP);
	switch(OP)
	{
		case 1:{
				printf("Voc� escolheu a op��o de Saque ");
				break;
				}
		case 2:{
				printf("Voc� escolheu a op��o de Deposito ");
				break;
				}
		case 3:{
				printf("Voc� escolheu a op��o de Extrato ");
				break;
				}
		case 4:{
				printf("Voc� escolheu a op��o de Saldo ");
				break;
				}
	}
}

#include <stdio.h>

main()
{
   int op;
printf("Caixa eletronico\n");
printf("1- Saque\n");
printf("2- Transferencia\n");
printf("3- Deposito\n");
printf("4- Aplicacao\n");
printf("Escolha sua opcao");
scanf("%d",&op);
switch(op)
{
case 1:{printf("Voce escolheu saque\n");
break;}
case 2:{printf("Voce escolheu transferencia");
break;}
case 3:{printf("Voce escolheu deposito");
break;}
case 4:{printf("Voce escolheu aplicação");
break;}
default:printf("Opcao invalida");
}
}

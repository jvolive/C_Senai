#include <stdio.h>
#include <cstdlib>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	float V,R;
	int OP;
	printf("Convers�o de velocidade.\n");
	printf("1 - m/s para km/h \n");
	printf("2 - km/h para m/s \n");
	printf("Informe o valor da velocidade : \n");
	scanf("%f",&V);
	printf("Escolha uma opera��o: ");
	scanf("%d",&OP);
	switch(OP)
	{
		case 1:{
				R=(V*3.6);
				printf("O resultado de metros por segundos para quilometros por hora ser�:%.2f ",R);
				break;
				}
		case 2:{
				R=(V/3.6);
				printf("O resultado de quilometros por hora para metros por segundos ser�:%.2f ",R);
				break;
				}
	}
}

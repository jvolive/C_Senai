#include <stdio.h>
#include <cstdlib>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	float S,R;
	int OP;
	printf("Aumento de Salário \n");
	printf("1 - categorias: A, C, F, e H \n");
	printf("2 - categorias: B, D, E, I, J e T \n");
	printf("3 - categorias: K e R \n");
	printf("4 - categorias: L, M, N, O, P, Q, R e S \n");
	printf("5 - categorias: U, V, X, Y, W e Z \n");
	printf("Escolha uma opção conforme sua categoria: ");
	scanf("%d",&OP);
	printf("Informe seu salário: ");
	scanf("%f",&S);
	switch(OP)
	{
		case 1:{
				R=((S*10)/100)+S;
				printf("Conforme sua categoria seu salário teve um aumento de 10 porcento, seu salário será: %.2f",R);
				break;
				}
		case 2:{
				R=((S*15)/100)+S;
				printf("Conforme sua categoria seu salário teve um aumento de 15 porcento, seu salário será: %.2f",R);
				break;
				}
		case 3:{
				R=((S*25)/100)+S;
				printf("Conforme sua categoria seu salário teve um aumento de 25 porcento, seu salário será: %.2f",R);
				break;
				}
		case 4:{
				R=((S*35)/100)+S;
				printf("Conforme sua categoria seu salário teve um aumento de 35 porcento, seu salário será: %.2f",R);
				break;
				}
		case 5:{
				R=((S*50)/100)+S;
				printf("Conforme sua categoria seu salário teve um aumento de 50 porcento, seu salário será: %.2f",R);
				break;
				}
	}
	
}

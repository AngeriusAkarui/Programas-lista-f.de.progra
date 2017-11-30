#include<stdio.h>
#include<conio.h>
int main()
//Este programa realiza la suma de dos matrices de 5 por 5
{
	int M1[3][3],M2[3][3],M3[3][3],i,j;
	puts("Programa para sumar matrices");
	printf("Introduzca los valores para la primera matriz (M1)\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Fila[%d],Columna[%d]\t",i,j);
			scanf("%d",&M1[i][j]);	
		}
		printf("\n");
	}
	printf("Introduzca los valores para la segunda matriz (M2)\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Fila[%d],Columna[%d]\t",i,j);
			scanf("%d",&M2[i][j]);	
		}
		printf("\n");
	}
	//Imprimir las dos matrices ordenadas
	puts("Matriz 1");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
			printf("\t%d",M1[i][j]);			
			}
		printf("\n");
		}
	puts("Matriz 2");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
			printf("\t%d",M2[i][j]);			
			}
		printf("\n");
	
		}
	//Suma de las matrices
	puts("Suma de las matrices M3= M1 + M2");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				M3[i][j]=(M1[i][j])+(M2[i][j]);
				printf("\t%d",M3[i][j]);	
			}
		printf("\n");
		}
getch();
return 0;
}

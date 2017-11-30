#include<stdio.h>
#include<conio.h>
int main()
//Este programa multiplica una matriz por un escalar
{
	int M1[3][3],M2[3][3],i,j,a=7;
	printf("\nMultiplicacion matriz por escalar (por %d)",a);
	puts("Introduzca el valor de la matriz");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Fila[%d],Columna[%d]\t",i,j);
			scanf("%d",&M1[i][j]);	
		}
		printf("\n");
	}
	//Imprimir la matriz
	puts("Matriz 1");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
			printf("\t%d",M1[i][j]);			
			}
		printf("\n");
		}
	//Multiplicación de la matriz
	printf("\nMatriz multiplicada por %d\n",a);
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
			M2[i][j]=(M1[i][j])*a;
			printf("\t%d",M2[i][j]);			
			}
		printf("\n");
		}
getch();
return 0;
}

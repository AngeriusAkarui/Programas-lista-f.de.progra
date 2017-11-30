#include<stdio.h>
#include<conio.h>
int main()
{
	float gasmes[11],t,b,m;
	int i;
	const char *meses[12]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
	puts("Calcular gastos anuales\n");
	puts("Ingrese el monto de su gasto por cada mes er $ MXN");
	for(i=0;i<12;i++)
	{
		printf("%s = $ ",meses[i]);
		scanf("%f",&gasmes[i]);
		t=(t+gasmes[i]);
	}
	for(i=0;i<6;i++)
	{ m=(m+gasmes[i]);
	}
	b=(t/12);
	printf("\nGastos los primesors seis meses del ano = $ %.2f MXN\n",m);
	printf("Gastos anuales totales                    = $ %.2f MXN\n",t);
	printf("Tu promedio de gastos anuales al mes es   = $ %.2f MXN",b);
getch();
return 0;	
}

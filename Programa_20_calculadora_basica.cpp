#include<stdio.h>
#include<conio.h>
//20. Programar una calculadora b�sica, con suma, resta, multipliaci�n y divisi�n.
int main()
{
float a,b,c;
int o;
	puts("Calculadora b�sica.      Marca:MiAlegria");
	puts("Introduzca el n�mero de la pci�n que desa seleccionar");
	puts("\n\n1. Sumar \n2. Restar \n3. Multiplicar \n4.Dividir");
	scanf("%d",&o);
	switch(o)
	{
		case 1:
			puts("\nSuma (a + b)\nIngrese el primer valor a");
			scanf("%f",&a);
			puts("Ingrese el segundo valor b");
			scanf("%f",&b);
			c=(a+b);
			printf("%f + %f = %f",a,b,c);
		break;
		case 2:
			puts("\nResta(a - b)\nIngrese el primer valor a");
			scanf("%f",&a);
			puts("Ingrese el segundo valor b");
			scanf("%f",&b);
			c=(a-b);
			printf("%f - %f = %f",a,b,c);
		break;
		case 3:
			puts("\nMultiplicaci�n(a * b)\nIngrese el primer valor a");
			scanf("%f",&a);
			puts("Ingrese el segundo valor b");
			scanf("%f",&b);
			c=(a*b);
			printf("%f * %f = %f",a,b,c);
		break;
		case 4:
			puts("\nDivisi�n(a / b)\nIngrese el primer valor a");
			scanf("%f",&a);
			puts("Ingrese el segundo valor b");
			scanf("%f",&b);
			c=(a/b);
			printf("%f / %f = %f",a,b,c);
		break;
		default:
			puts("Opcion no valida");
		break;
	}
getch();	
return 0;
}

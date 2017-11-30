#include<stdio.h>
#include<conio.h>
//20. Programar una calculadora básica, con suma, resta, multipliación y división.
int main()
{
float a,b,c;
int o;
	puts("Calculadora básica.      Marca:MiAlegria");
	puts("Introduzca el número de la pción que desa seleccionar");
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
			puts("\nMultiplicación(a * b)\nIngrese el primer valor a");
			scanf("%f",&a);
			puts("Ingrese el segundo valor b");
			scanf("%f",&b);
			c=(a*b);
			printf("%f * %f = %f",a,b,c);
		break;
		case 4:
			puts("\nDivisión(a / b)\nIngrese el primer valor a");
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

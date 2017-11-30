#include<stdio.h>
#include<conio.h>
//18. Menú de vendedoressimple
int main()
{
	int p;
	const char *chamb/*eadores*/[12]={"Molina","Juan","Luis","Anne","Julem","Aimar","Alex","Marcelo","Maire","Ryusei","Yurika","Pichuri"};
//	printf("%s",chamb[12]);
	puts("SISTEMA DE VENTAS AMAZON 'RUE'");
	puts("Ingrese el número de la opción que desea");
	puts("\nDivisiones");
		puts("\n1. Norte");
		puts("2. Sur");
		puts("3. Occidente");
		puts("4. Poniente");
	scanf("%d",&p);
	switch (p)
	{
		case 1:
			//Norte
			printf("\n1. %s \n2. %s \n3. %s",chamb[0],chamb[1],chamb[2]);
			printf("\n\n\t");
			scanf("\n\n\t%d",&p);
			switch (p)
				{
					case 1:
						printf("Las ventas de %s son $ 14,500 MXN",chamb[0]);
					break;	
					case 2:
						printf("Las ventas de %s son $ 15,000 MXN",chamb[1]);
					break;
					case 3:
						printf("Las ventas de %s son $ 17,000 MXN",chamb[2]);
					break;
					default:
					puts("Opcion no valida");
					break;
				}
		break;
		case 2:
			//Sur
			printf("\n1. %s \n2. %s \n3. %s",chamb[3],chamb[4],chamb[5]);
			printf("\n\n\t");
			scanf("%d",&p);
			switch (p)
			{
				case 1:
					printf("Las ventas de %s son $ 14,500 MXN",chamb[3]);
				break;	
				case 2:
					printf("Las ventas de %s son $ 15,000 MXN",chamb[4]);
				break;
				case 3:
					printf("Las ventas de %s son $ 17,000 MXN",chamb[5]);
				break;
				default:
				puts("Opcion no valida");
				break;
				}
		break;
		case 3:
			//Occidente
			printf("\n1. %s \n2. %s \n3. %s",chamb[6],chamb[7],chamb[8]);
			printf("\n\n\t");
			scanf("%d",&p);
			switch (p)
				{
					case 1:
						printf("Las ventas de %s son $ 14,500 MXN",chamb[6]);
					break;	
					case 2:
						printf("Las ventas de %s son $ 15,000 MXN",chamb[7]);
					break;
					case 3:
						printf("Las ventas de %s son $ 17,000 MXN",chamb[8]);
					break;
					default:
					puts("Opcion no valida");
					break;
				}
		break;
		case 4:
			//Poniente
			printf("\n1. %s \n2. %s \n3. %s",chamb[9],chamb[10],chamb[11]);
			printf("\n\n\t");
			scanf("%d",&p);
			switch (p)
				{
					case 1:
						printf("Las ventas de %s son $ 14,500 MXN",chamb[9]);
					break;	
					case 2:
						printf("Las ventas de %s son $ 15,000 MXN",chamb[10]);
					break;
					case 3:
						printf("Las ventas de %s son $ 17,000 MXN",chamb[11]);
					break;
					default:
					puts("Opcion no valida");
					break;
				}
		break; 
		default:
			puts("Opción no valida");
		break;
	}
getch();
return 0;	
}

#include <stdio.h>
int main ()
{
int Num;

	printf("Escribe la nota numérica: ");

	scanf("%d", &Num);

switch (Num){
	case 5:
	case 6: printf("Aprobado\n");
	break;
	
	case 7:
	case 8: printf("Notable\n");
	break;

	case 9:
	case 10: printf("Sobresaliente\n");
	break;

	case 0:
	case 1:
	case 2:
	case 3:
	case 4: printf("Suspenso\n");
	break;

	default: printf("Nota no válida\n");
	}
return 0;
}

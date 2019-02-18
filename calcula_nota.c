#include <stdio.h>
int main () 
{
	int Num;
	
		printf("Escribe la nota numérica: ");
		scanf("%d", &Num);

	if ((Num == 5) || (Num == 6)){

		printf("Aprobado\n");}


	else {if ((Num == 7) || (Num == 8)){
		
		printf("Notable\n");}


	else {if ((Num == 9) || (Num == 10)){

		printf("Sobresaliente\n");}


	else {if ((Num >= 0) && (Num < 4)){

		printf("Supspenso\n");}
	

	else {
		printf("Nota no válida\n");}
		}
	}
}

return 0;
}

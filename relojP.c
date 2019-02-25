#include<stdio.h>

int main()
{
	int Sec;

	do{
		printf("Inserte el valor en segundos:");
		scanf("%d", &Sec);

	
		if(Sec < 0){
			printf("Error. Cifra no válida.\n");
		}
	}while(Sec < 0);
		
	int Min;
	Min = Sec/60;
	Sec = Sec%60;
	int Hour;
	Hour = Min/60;
	Min = Min%60;
	int Dias;
	Dias = Hour / 24;
	Hour = Hour % 24;
	printf("Tiempo total: %ddías %dh %dm %ds\n", Dias,Hour, Min, Sec);

	return 0;					



}

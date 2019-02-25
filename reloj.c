#include<stdio.h>

int main()
{
	int Sec;

	printf("Inserte el valor en segundos:");
	
	scanf("%d", &Sec);

	
	if(Sec < 0){
		printf("Error. Cifra no válida.\n");
		}
	else;
		
		if (Sec < 60){

		printf("Tiempo total: %ds.\n", Sec);
		}

		else;
			int Min;
			if (Sec > 60 || Sec < 3600){
			Min = Sec/60;
			Sec = Sec%60;
			
			printf("Tiempo total: %dm %ds\n", Min, Sec);
			}
			else;
				int Hour;
				if (Sec < 216000){
				Hour = Sec/3600;
				Min = Hour/60;
				Sec = Sec%60;

				printf("Tiempo total: %dh %dm %ds\n", Hour, Min, Sec);
				}
				else;
				int Days;
				
					



}

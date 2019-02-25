#include<stdio.h>

int main()
{
	int Fact;
	int Result;

	printf("Inserte el valor deseado:");
	scanf("%d", &Fact);
	Result = Fact;

	if(Fact < 0){
	printf("Error. Cifra no válida.\n");
	}
	while(Fact < 0);
		if(Fact == 0 || Fact == 1){
		printf("El factorial de 0 es 1.\n");
		}

		do{
		Result = Result *(Result - 1);
		}
		while(Result<0);
	
		printf("El factorial de %d es %d.\n", Fact, Result);
	


return 0;
}

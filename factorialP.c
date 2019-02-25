#include<stdio.h>

int main()
{
	int Fact= 1,N,i;
	i = 1;
	printf("Inserte el valor deseado:");
	scanf("%d", &N);

	if(N < 0){
		printf("Error. Cifra no válida.\n");
	}else{
	
		for(i = 1 ; i <= N ; i ++){
			Fact = Fact * i;
		}
		printf("El factorial es %d\n", Fact);
	}
return 0;
}

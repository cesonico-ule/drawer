#include <stdio.h>

int numerosPares(int frst , int scnd);

int main () {
	int frst, scnd;
	printf("Introduzca el primer número:");
	scanf("%d", &frst);
	printf("Introduzca el segundo número:");
	scanf("%d", &scnd);
	
	if (frst > scnd){
	printf("Error. Datos no permitidos.\nIntroduzca primero el valor más pequeño.\n");
	return 0;
	}
	else{
	numerosPares(frst,scnd);

	}
return 0;
}



int numerosPares(int frst , int scnd){
	int i = scnd;
	for (frst > scnd;
	i=frst;
	i-1 && if (i%2 == 0){
		printf("%d", i);
	}
return 0;
}

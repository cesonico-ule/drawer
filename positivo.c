#include <stdio.h>

int potencia (int base,int exp);

int main () {

	int b, e;

	printf("Introduzca la base:\n");
	scanf("%d", &b);

	if (b < 0){
		printf("Valor no permitido.\n");
		return 0;
	}
	else{
	printf("Introduzca el exponente;\n");
	scanf("%d", &e);
	if (e < 0){
		printf("Valor no permitido.\n");
		return 0;
	}

	else{
	potencia (b , e);
	}
}
return 0;
}

int potencia (int base,int exp){
	int result;
	int i = exp;

	for (result = 1 , i = 1;
	exp >= 1;
	result = result * base , exp = exp - 1);

	printf("El resultado es %d.\n", result);

}

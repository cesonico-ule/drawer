#include <stdio.h>

	float volumenCono (float base, float altura);
	float volumenOrtoedro (float base, float altura, float grosor);

	int main () {
		int opt;
		float b , a , g;
		printf("¿Qué volumen deseas calcular?\n(1) Cono\n(2) Ortoedro\n\n(3) Salir\n");
		scanf("%d", &opt);
	
		switch (opt){
			case 1:
			printf("Introduce el radio del cono:\n");
			scanf("%f", &b);
			printf("Introduce la altura del cono:\n");
			scanf("%f", &a);
	
			volumenCono(b, a);
			break;
	
			case 2:
			printf("Introduce la base:\n");
			scanf("%f", &b);
			printf("Introduce la altura:\n");
			scanf("%f", &a);
			printf("Introduce el grosor:\n");
			scanf("%f", &g);
	
			volumenOrtoedro(b, a, g);
			break;

			case 3:
			return 0;
	
			default: printf("Error. Opción no válida\n");
			}
	
	
	
	
	return 0;
	}
	
	float volumenCono (float base, float altura){
		float vcfinal = 2*3.1416*base * altura / 3;
		printf("El volumen del cono es %f m³\n\n", vcfinal);
	return (vcfinal);
	}
	
	float volumenOrtoedro (float base, float altura, float grosor){
		float vofinal = base * altura * grosor;
		printf("El volumen del ortoedro es %f m³\n\n", vofinal);
	return (vofinal);
	}	

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
int opcion = 999;
char comando[80];
char * directorio = ".";
	while (opcion != 0){
		if (argc==1){
			directorio = ".";
		} else if (argc==2){
			directorio = argv[1];
		} else {
			return 0;
		}
		printf("Introducir opcion\n");
		scanf("%d", &opcion);
		switch (opcion){
		case 1:
			sprintf(comando, "ls -l %s", directorio);
			int a = system(comando);
		break;
		case 0:
			printf("Hasta luego\n");
		break;
		default:
			printf("Em que\n");
		break;
		}
	}
return 0;
}

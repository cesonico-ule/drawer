#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <signal.h>

int main (void){
		execl("/home/practicas/Descargas/a.out", "./a.out&", (char *)0);
return 0;
}



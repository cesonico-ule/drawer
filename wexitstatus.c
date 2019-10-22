#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <signal.h>

int main (void){
	pid_t pid;
	int estado, edad, edadHijo;
	pid=fork();
	if(pid==0){
  		edadHijo=140;
		exit(edadHijo);
	} else {
		pid=wait(&estado);
		edad=WEXITSTATUS(estado);
		printf("Mi hijo %d ha fallecido a los %d años.\n", pid, edad);
		pid=wait(&estado);
		printf("pid=%d\n", pid);
	}
return 0;
}



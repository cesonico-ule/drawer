#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <signal.h>

int main (){

	pid_t mipid=fork();

	int sig = 0;
	int variable = 5;
		printf("%d\n", getpid());
		sleep(3);


		if (mipid==-1){
			perror("Error en la llamada a fork()");
		} else if (mipid==0) {

			variable = variable + 2;

			printf("Mi variable es %d\n", variable);
			printf("Hijo: Mi pid es %d\n", getpid());
		} else {
			variable = variable + 2;
			printf("Mi variable es %d\n", variable);
			printf("Padre: mi pid es %d\n", getpid());
		}

		if (mipid==0) {
			mipid=fork();
			variable = variable + 2;

			printf("Mi variable es %d\n", variable);
			printf("Hijo: Mi pid es %d\n", getpid());
		}
		exit(0);
		kill(mipid, 15);

return 0;
}

//1. THE FORK SYSTEM CALL

#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	pid_t p;
	printf("\n My myexe PID is: %d\n", getpid());
	p = fork();

	printf("\n My FORK PID is: %d\n", getpid());

	if (p < 0)
		perror("FORK FAILED!!\n");
	else if (p == 0)
	{
		printf("My arguments are:  \n");
		for (int i = 0; i < argc; i++)
			printf("%s   ", argv[i]);
		exit(0);
		printf("\n");
	}
	else
	{
		printf("\nI am a parent: and leting child to finish...\n");
		sleep(2);
		printf("\nI am a parent: Child finished and \n EXITING...\n");
	}

	return 0;
}

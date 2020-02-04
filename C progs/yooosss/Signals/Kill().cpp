/*counter = 1         //(parent’s handler)
counter = 3         //(child’s handler)
counter = 5         //(parent’s main)
*/

//Using Kill.
#include<stdio.h>
#include<wait.h>
#include<signal.h>

pid_t pid;

int counter = 0;

void handler1(int sig)
{
	counter++;
	printf("counter = %d\n", counter);
	/* Flushes the printed string to stdout */
	fflush(stdout);
	kill(pid, SIGUSR1);
}

void handler2(int sig)
{
	counter += 3;
	printf("counter = %d\n", counter);
	exit(0);
}

int main()
{
	pid_t p;
	int status;
	signal(SIGUSR1, handler1);
	if ((pid = fork()) == 0) // when child is running
	{
		signal(SIGUSR1, handler2); // Overwrite the signal handler
		kill(getppid(), SIGUSR1); // Send signal SIGUSR1 to process PID
		while(1) ;
	}
	
	if ((p = wait(&status)) > 0)
	{
		counter += 4;
		printf("counter = %d\n", counter);
	}
}

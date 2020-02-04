//Wait funtion

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
pid_t wait(int *status);
int main()
{
pid_t childPid; 	
int status;
switch (childPid = fork()) {
	case -1:
		break;
	case 0:
		printf(" I am Child \n");
		break;
	default:	
		childPid=wait(&status);
		printf(" I am Parent \n");	
		sleep(3);
}

/* Both parent and child come here */
if(childPid==0)
	printf("Child - PID=%ld   \n", (long) getppid());
else
	printf("Parent - PID=%ld  \n", (long) getppid());
exit(EXIT_SUCCESS);
}
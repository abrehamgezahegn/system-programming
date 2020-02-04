//Creating a Process
#include <unistd.h> //fork, wait,getppid
#include <stdio.h>
#include <stdlib.h> //exit
int main() {
	pid_t childPid; 
	printf("\n HW \n");	
	switch (childPid = fork()) {
		case -1:
			break;
		case 0:
			printf("I am Child \n");
			break;
		default:	
			printf("I am Parent \n" );	
			sleep(3);
	}
	/* Both parent and child come here */
	if(childPid==0)
		printf("Child - PID=%ld   \n", (long) getpid());
	else
		printf("Parent - PID=%ld  \n", (long) getpid());
	exit(EXIT_SUCCESS);
}
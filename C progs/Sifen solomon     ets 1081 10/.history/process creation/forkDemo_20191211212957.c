//1. THE FORK SYSTEM CALL
/*
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

	if(p<0)
	perror("FORK FAILED!!\n");
	else if(p==0)
	{
		printf("My arguments are:  \n");
		for(int i=0;i<argc;i++)
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

*/
/*

//2.  FORK with WAIT

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int i=0;

void foo(char *name){	
	for(;i<5;i++){
		sleep(rand() % 7);   //
		//sleep(1); 
		printf("Passing %d at .. %s\n",i,name);
	}
}

int main(int argc, char *argv[])
{
	int status;
	printf("My PID is: %d \n", getpid());
	printf("My parent's PPID is: %d \n", getppid());
	
	int cntr=0;
	pid_t p =fork();
	srand((int)p);
	if(p<0)
		printf("FORK FAILED!!\n");
	else if(p == 0)
	{
		foo("  CHILD");
		printf("\nI am CHILD, My PID @ FORK is: %d \n", getpid());
		printf("\nI am CHILD, My parent's PPID @ FORK is: %d \n", getppid());
	}
	else{
		foo("  PARENT");
		printf("My parent's PPID @ FORK  is: %d \n", getpid());
		wait(NULL); // wait(&status);   
	}

	return 0;
}
*/

// Checking for PARENT and CHILD running at different Address spaces
//3.  FORK with Address spaces variation

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

// A function to do some task...
int i=0;  // global var to be accessed by both chiold and parent processes

void foo(char *name){	
	for(;i<5;i++){
	//	sleep(rand() % 7);   //
sleep(1); 
		printf("Passing %d at .. %s\n",i,name);
	}
}


int main(int argc, char *argv[])
{
	int status;
	printf("My PID is: %d \n", getpid());
	printf("My parent's PPID is: %d \n", getppid());
	
	int cntr=0;
	pid_t p =fork();
	srand((int)p);
	if(p<0)
		printf("FORK FAILED!!\n");
	else if(p == 0)
	{
		foo("  CHILD");

		printf("\nI am CHILD, My PID @ FORK is: %d \n", getpid());
		printf("\nI am CHILD, My parent's PPID @ FORK is: %d \n", getppid());
	}
	else{
		foo("  PARENT");
//		printf("My parent's PPID @ FORK  is: %d \n", getpid());
				wait(NULL); // wait(&status);   
execl("/bin/ls","ls","-l",NULL);

	}

	return 0;
}



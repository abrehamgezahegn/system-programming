//1. THE SHARED MEMORY

#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <sys/mman.h>

#define PAGESIZE 1024

int globalVar=5;

int main(int argc, char *argv[])
{
	
	uint8_t *shared_mem = mmap(NULL, PAGESIZE, PROT_READ | PROT_WRITE,MAP_SHARED | MAP_ANONYMOUS,-1,0);
	pid_t p = fork();
	
	*shared_mem = 15;
	if(p<0)
		perror("FORK FAILED!!\n");
	else if(p==0)
	{
		*shared_mem = 200;
		globalVar=100;
	}
	else
		wait(NULL);
	
	printf("NOT Shared ... :  %i\n",globalVar);
	printf("Shared ... :  %i\n",*shared_mem);

	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/shm.h>

#include <sys/ipc.h>
#include <string.h>

#define PAGE_SIZE 1000
int main()
{
	printf("SHARED MEMORY IMPLEMENTATION\n");
	//create shared memory
	int m = fork();
	if (m > 0)
	{
		int shid;
		key_t key = 4949;
		char *addr, buf[8];
		memcpy(buf, "hi every", 11);
		shid = shmget(key, PAGE_SIZE, IPC_CREAT | 0666);
		//attach to process address space

		addr = shmat(shid, NULL, 0);
		memcpy(addr, buf, 8);
	}
	else if (m == 0)
	{
		int shid;
		key_t key = 4949;
		char *addr, *buf[8];

		shid = shmget(key, PAGE_SIZE, IPC_CREAT | 0666);
		//attach to process address space

		addr = shmat(shid, NULL, 0);
		memcpy(buf, addr, 8);
		printf("content of buffer %s", buf);
	}
}

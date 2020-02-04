#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/shm.h>
#include <sys/ipc.h>
#include <string.h>

#define SHM_SIZE 100
int main()
{
	int shmid;
	key_t shmkey;
	char *shmem, *var;
	char buf[] ="Hello World"; 
	shmkey = 9876;
//shmget
	shmid = shmget(shmkey, SHM_SIZE, IPC_CREAT|0666);
	if(shmid < 0){ perror("shmget");exit(1);}
	else
		printf("Shared memory created with shmid  %d\n",shmid);
//shmat
	shmem = shmat(shmid, NULL,0);
	if(shmem == (char *) -1){perror("shmat");exit(1);}
	else
		printf("Shared memory attached sucessfully with %p\n",&shmem);

//mem operations  --- WRITING
	printf("\nWRITING ' %s ' on Shared memory at %p ...\n",buf,&shmem);
	memcpy(shmem,buf,11);
	var = shmem;
	var = var+11;
	*var = 0;

	while(*shmem != 'Q')
		wait(NULL);
	
	return 0;
}

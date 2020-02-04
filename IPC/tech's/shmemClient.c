#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/shm.h>
#include <sys/ipc.h>

#define SHM_SIZE 100
int main()
{
	int shmid;
	key_t shmkey;
	char *shmem, *var;

	shmkey = 9876;
//shmget
	shmid = shmget(shmkey, SHM_SIZE, 0666);
	if(shmid < 0){ perror("shmget");exit(1);}
	else
		printf("Shared memory created with shmid  %d\n",shmid);
//shmat
	shmem = shmat(shmid, NULL,0);
	if(shmem == (char *) -1){perror("shmat");exit(1);}
	else
		printf("Shared memory attached sucessfully with %p\n",&shmem);
//mem operations --- READING
	printf("\nREADING from Shared memory at %p ...\n",&shmem);
	for(var=shmem; *var!=0;var++)
		putchar(*var);	
	printf("\n");

	*shmem = 'Q';
	
	return 0;
}

/*The client part is similar to the server.
It waits until status is FILLED. Then,
the clients retrieves the
 data and sets status to TAKEN, informing
 the server that data have been taken.
*/

/*Since the server program must allocate a
shared memory segment to be used by the client,
the server must run before running the client.
One way to do this is that start the server in a
window and then move to a second window to start the client.
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>

#include "shm-02.h"

void main(void)
{
     key_t ShmKEY;
     int ShmID;
     struct Memory *ShmPTR;

     ShmKEY = ftok(".", 'x');
     ShmID = shmget(ShmKEY, sizeof(struct Memory), 0666);
     if (ShmID < 0)
     {
          printf("*** shmget error (client) ***\n");
          exit(1);
     }
     printf("   Client has received a shared memory of four integers...\n");

     ShmPTR = (struct Memory *)shmat(ShmID, NULL, 0);
     if ((int)ShmPTR == -1)
     {
          printf("*** shmat error (client) ***\n");
          exit(1);
     }
     printf("   Client has attached the shared memory...\n");

     while (ShmPTR->status != FILLED)
          ;
     printf("   Client found the data is ready...\n");
     printf("   Client found %d %d %d %d in shared memory...\n",
            ShmPTR->data[0], ShmPTR->data[1],
            ShmPTR->data[2], ShmPTR->data[3]);

     ShmPTR->status = TAKEN;
     printf("   Client has informed server data have been taken...\n");
     shmdt((void *)ShmPTR);
     printf("   Client has detached its shared memory...\n");
     printf("   Client exits...\n");
     exit(0);
}

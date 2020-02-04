#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main()
{

    pid_t forkPid = fork();
    pid_t forkPid2 = fork();
    fork();

    printf(" Process: %d \n ", getpid());

    // if (forkPid == 0)
    // {
    //     printf("Child Process: %d \n ", getpid());
    // }
    // else if (forkPid != 0)
    // {
    //     printf("Parent process: %d \n ", getppid());
    // }
    // else
    // {
    //     printf("Error has ocurred");
    // }

    return 0;
}

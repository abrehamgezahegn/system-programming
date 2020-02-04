#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <signal.h>

void handleSig()
{
    printf("child is killed baba");
}

int main()
{

    pid_t forkPid = fork();

    signal(SIGCHLD, &handleSig);
    // printf(" Process: %d \n ", getpid());

    if (forkPid == 0)
    {
        printf("Child Process: %d \n ", getpid());
        while (1)
            ;
    }
    else if (forkPid != 0)
    {
        printf("Child Process: %d \n ", getpid());

        while (1)
            ;
        // printf("Parent process: %d \n ", forkPid);
        // kill(forkPid, 9);
    }
    else
    {
        printf("Error has ocurred");
    }

    return 0;
}

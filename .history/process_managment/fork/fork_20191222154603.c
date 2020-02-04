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

    signal(SIGCHLD, handleSig);

    pid_t forkPid = fork();

    // printf(" Process: %d \n ", getpid());

    if (forkPid == 0)
    {
        printf("Child Process: %d \n ", getpid());
    }
    else if (forkPid != 0)
    {
        printf("Parent process: %d \n ", forkPid);
        kill(forkPid, 2);
    }
    else
    {
        printf("Error has ocurred");
    }

    return 0;
}

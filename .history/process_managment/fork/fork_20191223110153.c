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

    int status;

    // signal(SIGCHLD, &handleSig);
    // printf(" Process: %d \n ", getpid());

    if (forkPid == 0)
    {
        printf("Child process");
        // while (1)
        // {
        //     sleep(1);
        //     printf("Child Process: %d \n ", getpid());
        // }
    }
    else if (forkPid != 0)
    {
        pid_t ret = waitpid(forkPid, &status, WUNTRACED);

        // if (WIFSTOPPED(status))
        // {
        //     printf("Stopped by signal");
        // }
        printf("Child wait status: %d", status);

        // while (1)
        //     ;
        // printf("Parent process: %d \n ", forkPid);
        // kill(forkPid, 9);
    }
    else
    {
        printf("Error has ocurred");
    }

    return 0;
}

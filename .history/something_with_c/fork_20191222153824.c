#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>

void handleChild()
{
    printf("child is killed baba");
}

int main()
{

    signal(SIGCHLD, handleChild);
    pid_t p = fork();
    pid_t child;
    if (p == 0)
    {
        while (1)
        {
            printf("child is running");
            sleep(1);
        }
    }
    else if (p != 0)
    {
        wait(NULL);
        kill(p, 2);
        printf("Parent running");
    }
    else
    {
        printf("Error");
    }

    return 0;
}
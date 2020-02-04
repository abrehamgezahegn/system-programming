#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    pid_t p = fork();
    // printf("running onece and twice \n");
    if (p == 0)
    {
        wait(NULL);
        printf("Look who's here %d \n", getppid());
        pid_t p2 = fork();
        if (p2 == 0)
        {
            printf("second child:\n");
        }
    }
    else if (p != 0)
    {
        printf("Parent before exiting: %d \n", getpid());
        exit(0);
        printf("Am still here baba.");
    }
    else
    {
        printf("Error");
    }

    return 0;
}
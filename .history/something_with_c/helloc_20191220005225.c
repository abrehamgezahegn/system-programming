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
        printf("Look who's here %d \n", getpid());
        while (1)
            ;
    }
    else if (p != 0)
    {
        printf("Parent before exiting: %d \n", getpid());
    }
    else
    {
        printf("Error");
    }

    return 0;
}
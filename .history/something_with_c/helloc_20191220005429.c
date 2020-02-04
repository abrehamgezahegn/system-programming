#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    pid_t p = fork();
    if (p == 0)
    {
        while (1)
            ;
        printf("Look who's here %d \n", getpid());
    }
    else if (p != 0)
    {
        // wait(NULL);
        printf("Parent before exiting: %d \n", getpid());
    }
    else
    {
        printf("Error");
    }

    return 0;
}
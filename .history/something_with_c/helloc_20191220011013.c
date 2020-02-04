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

        printf("Look who's here %d \n", getpid());
    }
    else if (p != 0)
    {
        // wait(NULL);
        while (wait(NULL) > 0)
            ;
        printf("Parent before exiting: %d \n", getpid());
    }
    else
    {
        printf("Error");
    }

    return 0;
}
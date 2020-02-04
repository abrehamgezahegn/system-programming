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
        // wait(NULL);
        printf("Look who's here");
        pid_t p2 = fork();
        if (p == 0)
        {
            printf("second child")
        }
    }
    else if (p != 0)
    {
        exit(0);
    }
    else
    {
        printf("Error");
    }

    return 0;
}
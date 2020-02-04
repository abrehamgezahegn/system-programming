#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    pid_t p = fork();
    pid_t child;
    if (p == 0)
    {

        printf("Look who's here %d \n", getpid());
        child = getpid();
        // sleep(2);
        // exit(0);
    }
    else if (p != 0)
    {
        pid_t code = wait(NULL);
        printf("Exit code: %d", code);
        while (wait(NULL) > 0)
        {
            printf("Erim chisua \n");
        }

        printf("Parent before exiting: %d \n", getpid());
    }
    else
    {
        printf("Error");
    }

    return 0;
}
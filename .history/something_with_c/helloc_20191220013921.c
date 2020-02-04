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

        child = getpid();
        printf("Look who's here %d \n", child);
        // sleep(2);
        // exit(0);
    }
    else if (p != 0)
    {
        waitpid(child, NULL, 0);
        printf("Parent is me baba for: %d ", child);
    }
    else
    {
        printf("Error");
    }

    return 0;
}
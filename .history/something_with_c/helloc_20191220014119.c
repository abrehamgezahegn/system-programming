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
    }
    else if (p != 0)
    {
        waitpid(p, NULL, 0);
        printf("Parent is me baba for: %d \n ", p);
    }
    else
    {
        printf("Error");
    }

    return 0;
}
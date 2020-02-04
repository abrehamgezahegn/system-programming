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
        execve("search.bash", [ NULL, NULL ]);
        exit(0);
    }
    else if (p != 0)
    {
        wait(NULL);
        printf("Parent running");
    }
    else
    {
        printf("Error");
    }

    return 0;
}
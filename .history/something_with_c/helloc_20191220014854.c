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
        execlp("./a.out", "", NULL);
    }
    else if (p != 0)
    {
        printf("Parent running");
    }
    else
    {
        printf("Error");
    }

    return 0;
}
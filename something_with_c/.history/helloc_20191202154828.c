#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    printf("Main pid %d \n", getpid());

    pid_t p = fork();
    if (p == 0)
    {
        int count = 5;
        while (count > 0)
        {
            printf("Hello from child process \n");
            printf("forking pid: %d \n", getpid());
            printf("parent pid: %d \n", getppid());
            count--;
        }
    }
    else if (p > 0)
    {
        printf("hello from parent fork: %d \n", getppid());
    }
    else
    {
        printf("Error");
    }

    return 0;
}
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
        execlp("./search.bash", NULL);
        int count = 5;
        while (count < 0)
        {
            printf("Hello from child process \n");
            printf("(child) pid: %d \n", getpid());
            printf("(parent) pid: %d \n", getppid());
            count--;
        }
    }
    else if (p > 0)
    {
        wait(NULL);
        printf("hello from (parent) fork: %d \n", getppid());
    }
    else
    {
        printf("Error");
    }

    return 0;
}
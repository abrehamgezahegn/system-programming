#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
    printf("main pid: %d \n", getpid());

    int pid = fork();

    if (pid == 0)
    {
        printf("Child one is runnig %d \n", getppid());
        int pid2 = fork();

        //  child

        if (pid2 > 0)
        {
            printf("child one rasu is running %d \n", getppid());
        }

        // this
        // if (pid2 == 0)
        // {
        //     printf("child inside first child \n");
        // }
    }
    if (pid > 0)
    {
        // printf("parent is running \n");
        // int pid3 = fork();

        // if (pid3 == 0)
        // {
        //     printf("Child  two inside parent one \n");
        // }

        // if (pid > 0)
        // {
        //     printf("parent inside parent \n");
        // }
    }

    return 0;
}
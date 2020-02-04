#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    int pid = fork();

    if (pid < 0)
    {
        printf("fork error");
    }

    if (pid == 0)
    {
        printf("child is running pid is: %d  \n", getpid());
        while (1)
        {
            sleep(1000);
        }

        exit(100);
    }

    if (pid > 0)
    {
        int status;
        int proc = wait(&status);
        printf("wait status: %d \n", status);
        bool res = WIFEXITED(status);
        printf("ahs exited noramlly: %d", res);

        // while (1)
        // {
        //     printf("parent is running pid is %d", getpid());
        //     sleep(1);
        // }
    }

    return 0;
}
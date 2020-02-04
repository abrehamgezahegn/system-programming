#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>
int main()
{

    int pid = fork();

    if (pid < 0)
    {
        printf("fork error");
    }

    if (pid == 0)
    {
        // while (1)
        // {
        //     sleep(1000);
        //     printf("child is running pid is %d :", getpid());
        // }

        exit(100);
    }

    if (pid > 0)
    {
        int status;
        int proc = wait(&status);
        printf("wait status: %d", proc);
        // while (1)
        // {
        //     printf("parent is running pid is %d", getpid());
        //     sleep(1);
        // }
    }

    return 0;
}
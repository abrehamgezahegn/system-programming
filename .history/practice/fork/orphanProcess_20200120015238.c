#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
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
        //     printf("child is running pid is %d :", getpid());
        //     sleep(1);
        // }
    }

    if (pid > 0)
    {
        int status;
        wait(&status);
        printf("wait status: %d", status);
        while (1)
        {
            printf("parent is running pid is %d", getpid());
            sleep(1);
            s
        }
    }

    return 0;
}
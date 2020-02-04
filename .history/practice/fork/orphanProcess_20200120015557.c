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
        while (1)
        {
            // sleep(1000);
            printf("child is running pid is %d :", getpid());
        }
    }

    if (pid > 0)
    {
        // int status;
        // wait(NULL);
        // printf("wait status: %d", status);
        while (1)
        {
            printf("parent is running pid is %d", getpid());
            sleep(1);
        }
    }

    return 0;
}
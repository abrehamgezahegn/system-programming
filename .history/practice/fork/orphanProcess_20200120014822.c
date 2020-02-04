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
            printf("child is running");
            sleep(1);
        }
    }

    if (pid > 0)
    {
        wait(NULL);
        while (1)
        {
            printf("parent is running");
        }
    }

    return 0;
}
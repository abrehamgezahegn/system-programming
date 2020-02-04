#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    pid_t pid = fork();

    if (pid < 0)
    {
        printf("fork error");
    }

    if (pid == 0)
    {

        printf("child parent before  parent was killed : %d \n", getppid());
        kill(getppid(), 9);
        while (1)
        {
            printf("child is running with parent : %d \n", getppid());
            sleep(1);
        }
    }
    if (pid > 0)
    {
        printf("parent is running \n ");
        // kill(pid, 15);
    }

    return 0;
}
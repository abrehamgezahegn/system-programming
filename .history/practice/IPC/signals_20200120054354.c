#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <stdbool.h>
#include <signal.h>

int main()
{

    pid_t pid = fork();

    if (pid < 0)
    {
        printf("fork error");
    }

    if (pid == 0)
    {
        kill(pid, 15);
        printf("child is running");
    }
    if (pid > 0)
    {

        while (1)
        {
            printf("parent is running : %d \n", getpid());
            sleep(1);
        }
    }

    return 0;
}
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

        while (1)
        {
            printf("child is running : %d \n", getpid());
            sleep(1);
        }
    }
    if (pid > 0)
    {
        printf("parent is running");
        kill(pid, 15);
    }

    return 0;
}